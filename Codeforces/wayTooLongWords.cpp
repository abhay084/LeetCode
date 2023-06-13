#include<iostream>
#include<string>

using namespace std;

string longToShort(string str){
    string short_str="";
    int l = str.length();

    short_str+=str.at(0);
    short_str+=to_string(l-2);
    short_str+=str.at(l-1);

    return short_str;
}

int main(){

    int n;
    cin>>n;

    string str;

    while(n--){
        cin>>str;

        if(str.length() > 10){
            cout<<longToShort(str)<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }

    return 0;

}