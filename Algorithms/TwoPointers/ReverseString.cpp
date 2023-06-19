//https://leetcode.com/problems/reverse-string/

#include<iostream>
#include<vector>

using namespace std;

void reverseString(vector<char> s){
    int n = s.size();

    int i = 0;
    int j = n-1;

    

    for(auto it=s.begin(); it<s.end();it++){
        cout<<*it<<" ";
    }

    return;
}

int main(){
    int n;
    cin>>n;

    vector<char> s;

    while(n--){
        char x;
        cin>>x;
        s.push_back(x);
    }

    reverseString(s);

    return 0;
}