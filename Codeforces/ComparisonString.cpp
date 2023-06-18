#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

            int ans=1;
            int cur=1;

        for(int i=0;i<n;i++){
            if(s[i] != s[i-1]) cur=1;
            else cur++;

            ans = max(ans,cur);

        }

        cout<<ans+1<<endl;
    }
}