#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> KRotate(vector<int> &arr,int k){
     int n = arr.size()-1;
    k = k%n;
    while(k--){
        int val = arr[arr.size() - 1];
        arr.pop_back();
        arr.insert(arr.begin(),val);
    }
    return arr;
}

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr;
    while(n--){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    KRotate(arr,k);

    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;

 }