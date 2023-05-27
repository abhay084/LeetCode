#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>nums={1,2,3,4};
    int n = nums.size();
    for(int i=0;i<nums.size()/2;i++){
        int temp = nums[i];
        nums[i] = nums[n-i-1];
        nums[n-i-1] = temp;
    }

    for(auto it:nums){
        cout<<it<<" ";
    }
}