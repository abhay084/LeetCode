//1464. Maximum Product of Two Elements in an Array

#include<iostream>
#include<vector>

using namespace std;

vector<int> getMax(vector<int> arr,int n){

    int firstLar=0;
    int secLar=-1;

    for(int i=0;i<n;i++){
        if(arr[i] >= arr[firstLar]){
            secLar = firstLar;
            firstLar = i;
        }
    }

    vector<int>ans={firstLar,secLar};
    return ans;

}

int main(){

    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int>ans = getMax(nums,n);

    int prod = (nums[ans[0]]-1) * (nums[ans[1]] -1 );

    cout<<prod<<endl;

}