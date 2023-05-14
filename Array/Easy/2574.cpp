//2574. Left and Right Sum Differences
#include<iostream>
#include<vector>
#include <unordered_map>
#include<cmath>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> nums(n);
    vector<int> ans(n);

    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    unordered_map<int,int> mp;
    mp[0]=0;
    for(int i=1;i<n;i++){
        mp[i]=mp[i-1]+nums[i-1];
    }

    unordered_map<int,int> mp2;
    mp2[n-1]=0;
    for(int i=n-2;i>=0;i--){
        mp2[i]=mp2[i+1]+nums[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i] = abs(mp[i] -  mp2[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }


}