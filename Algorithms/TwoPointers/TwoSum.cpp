//https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int> arr,int t){
    int n = arr.size();

    vector<int> final;

    for(int i=0;i<n;i++){
        int j =  n - 1;
        while(i<j){
            if(arr[i] + arr[j] == t){
                final.push_back(i);
                final.push_back(j);
                return final;
            }
            else{
                j--;
            }
        }
    }
    return final;
}

int main(){

    int n;
    cin>>n;

    int t;
    cin>>t;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    vector<int> res = twoSum(arr,t);
    cout<<res[0]<<" "<<res[1]<<" "<<endl;
    return 0;
    
}