#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    vector<int>nums={10,10,20,30,30,30,40,40};

    for(auto it=nums.begin();it<nums.end();it++){
        auto m=it;
        if(*it==*(++m)){
            nums.erase(it);
        }
    }

    for(auto it:nums){
        cout<<it<<" ";
    }

    // set<int>s;

    // for(auto it:nums){
    //     s.insert(it);
    // }

    // for(auto it:s){
    //     cout<<it<<" ";
    // }

    return 0;
}