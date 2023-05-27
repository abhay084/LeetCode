#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={100,200};
    int par=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[i+1]){
            cout<<"False"<<"\n";
            par=1;
            break;
        }
    }

    if(par==0){
        cout<<"True"<<"\n";
    }
    return 0;

}