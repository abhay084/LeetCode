#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    
    while(n--){
        int petya,vasya,tonya;
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya >=2){
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}