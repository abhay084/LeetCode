#include<iostream>
#include<vector>
#include<utility>

using namespace std;

pair<int,int> Sumofpairs(vector<int>&arr,int x){
    int n = arr.size();

    pair<int,int>p={0,0};

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int val = arr[i] + arr[j];
            if(val <= x && (val >= (arr[p.first] + arr[p.second]))){
                p.first = i;
                p.second = j;
            }
        }
    }
    p.first = arr[p.first];
    p.second = arr[p.second];
    return p;
}

int main(){
    int n;
    cin>>n;

    int x;
    cin>>x;

    vector<int>arr;
    while(n--){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }

    pair<int,int> p = Sumofpairs(arr,x);
    cout<<arr[p.first]<<" and "<<arr[p.second]<<endl;


}