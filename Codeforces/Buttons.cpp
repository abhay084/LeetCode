#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        if(c%2 == 0){
            if(b >= a){
                cout<<"Second"<<endl;;
            }
            else{
                cout<<"First"<<endl;
            }
        }
        else{
            if(b >= a + 1){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }
}