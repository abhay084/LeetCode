#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
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

    sort(arr.begin(),arr.end());

    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

}
