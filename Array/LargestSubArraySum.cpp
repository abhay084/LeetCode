#include<iostream>
using namespace std;

// O(N**3) cube time complexity
// bad approach
int subArraySum1(int arr[],int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=0;

            for(int k=i;k<=j;k++){
                currSum+=arr[k];
            }
            ans = max(ans,currSum);
        }
    }

    return ans;
}


// Prefix Sum in O(N**2) sqaure time complexity
//. Good Approach
int prefixSUm(int arr[],int n){
    int prefixArr[100]={0};
    prefixArr[0] = arr[0];

    for(int i=1;i<n;i++){
        prefixArr[i] = prefixArr[i-1] + arr[i];
    }

    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            int currSum = i>0 ? prefixArr[j] - prefixArr[i-1] : prefixArr[j];
            ans = max(ans,currSum);
        }

        
    }

    return ans;
}

// Kadane's Algorithm => O(N) linear time solution
// Best Approach
int KadaneSum(int arr[],int n){
    int currSum=0;
    int MaxSum=0;

    for(int i=0;i<n;i++){
        currSum = currSum + arr[i];
        if(currSum < 0){
            currSum = 0;
        }

        MaxSum = max(MaxSum,currSum);
    }
    return MaxSum;
}

int main(){
    int arr[]={1,2,3,4,-1,-4,5,6,7,-3,-5,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<subArraySum1(arr,n)<<endl;
    cout<<prefixSUm(arr,n)<<endl;
    cout<<KadaneSum(arr,n)<<endl;
    return 0;
}