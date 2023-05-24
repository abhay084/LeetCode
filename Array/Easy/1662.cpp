//1662. Check If Two String Arrays are Equivalent

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n1;
    cin>>n1;

    int n2;
    cin>>n2;

    vector<string>word1(n1);
    vector<string>word2(n2);


    for(int i=0;i<n1;i++){
        cin>>word1[i];
    }

    for(int i=0;i<n2;i++){
        cin>>word2[i];
    }

    string str1;
    string str2;

    for(int i=0;i<n1;i++){
        str1+=word1[i];
    }

    for(int i=0;i<n2;i++){
        str2+=word2[i];
    }

    // if (str1 == str2)
    // {
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }

    int par=0;

    int l = str1.length();

    for(int i=0;i<l;i++){
        if(str1[i] == str2[i]){
            continue;
        }
        else{
            par=1;
            cout<<"false";
            break;
        }
    }
    if(par==0){
        cout<<"true";
    }

}