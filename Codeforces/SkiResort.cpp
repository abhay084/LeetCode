// https://codeforces.com/problemset/problem/1840/C

#include<iostream>
#include<vector>

#define fr(i,a,b) for(int i=a;i<b;i++)

typedef long l;
using namespace std;

void printAll(vector<long> arr){
    fr(i,0,arr.size()){
        cout<<arr[i]<<" ";
    }
    return;
}

vector<l> findSuitableDays(vector<l> arr,long q){
    vector<l> suitable;
    fr(i,0,arr.size()){
        if(arr[i] <= q){
            suitable.push_back(1);
        }
        else{
            suitable.push_back(0);
        }
    }

    return suitable;
}

int findSubArrays(vector<l> arr,int k){
    int len = arr.size();
    int subArrayLen=0;

    for(int i=1;i<=len;++i){
        int x = len - i+1;
        subArrayLen+=(x*(x+1))/2;
    }

    return subArrayLen;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        l q;

        cin>>n>>k>>q;

        vector<l> arr;

         fr(i,0,n){
            l num;
            cin>>num;
            arr.push_back(num);
        }

        vector<l> suitableDays = findSuitableDays(arr,q);


    }

    return 0;
}