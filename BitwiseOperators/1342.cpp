#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int div=0;
    while(n>0){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n-1;
        }
        div++;
    }

    cout<<div<<endl;
}