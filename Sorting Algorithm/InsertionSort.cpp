#include<iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int>&nums){
    int n = nums.size();

    for(int i=1;i<n;i++){
        int curr = nums[i];
        int prev = i-1;

        while(prev >= 0 && nums[prev] > curr){
            nums[prev+1] = nums[prev];
            prev = prev-1;
        }
        nums[prev+1] = curr;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;

    while(n--){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    InsertionSort(arr);

    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    
}