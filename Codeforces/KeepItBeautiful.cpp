//https://codeforces.com/problemset/problem/1841/B

#include<iostream>
#include<vector>

typedef long l;

using namespace std;

bool checkBeautiful(vector<l> nums){
    int left = 0;
    int right = nums.size();

    while(nums[left] <= nums[left+1]){
        left++;
    }
    while(left < right){
        if(nums[left] >= nums[left+1]){
            left++;
        }
        else{
            return false;
        }
    }

    return true;
}


int main(){
    int t;
    cin>>t;
    vector<l> arr;
    while(t--){
        int q;
        cin>>q;

        while(q--){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        cout<<checkBeautiful(arr)<<endl;

    }

}