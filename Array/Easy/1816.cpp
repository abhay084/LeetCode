//1816. Truncate Sentence

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string s ="Hello how are you Contestant";
    int k=4;
    int cnt=1;
    string str="";
    int l = s.length();
    string str="";
    for(int i=0;i<l;i++){
        if(cnt<=k){
            if(s[i] == ' '){
                cnt++;
            }
            if(cnt <= k){
            str+=s[i];
            }
        }
    }

    cout<<str<<endl;
    return 0;

}