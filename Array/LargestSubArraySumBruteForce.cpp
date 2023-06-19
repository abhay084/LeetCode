#include<iostream>
using namespace std;

int subArraySum1(int arr[],int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=0;

            for(int k=i;k<=j;k++){
                currSum+=arr[k];
            }
            cout<<currSum<<endl;
            ans = max(ans,currSum);
        }
    }

    return ans;
}

int main(){
    int arr[]={1,2,3,4,-1,-4,5,6,7,-3,-5,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<subArraySum1(arr,n)<<endl;
    return 0;
}