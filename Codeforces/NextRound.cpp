//https://codeforces.com/problemset/problem/158/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>arr;
    while(n--){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(arr[k-1] <= arr[i] && arr[i] != 0){
            ans++;
        }
    }
    cout<<ans<<endl;
    arr.clear();
    return 0;
}