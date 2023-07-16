#include<iostream>

using namespace std;

int main(){
    int n,start;
    cin>>n>>start;

    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = start + 2 * i;
        
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
    return 0;
}