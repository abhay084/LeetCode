//2656. Maximum Sum With Exactly K Elements

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getLargest(vector<int>arr,int n){
    sort(arr.begin(),arr.end());

    int sum=0;

    sum = arr[n-1]+arr[n-2]+arr[n-3];
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int>temp(nums);

    cout<<getLargest(temp,n);

    return 0;

}