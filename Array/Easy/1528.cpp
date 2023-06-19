// 1528: Shuffle String

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> s;
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }



    vector<int> indices(n);
    for(int i=0;i<n;i++){
        cin>>indices[i];
    }

    string ans="";

    for(int i=0;i<n;i++){
        ans += s[indices[i]];
    }

    cout<<ans<<endl;


}