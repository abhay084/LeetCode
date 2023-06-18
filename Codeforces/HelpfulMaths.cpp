#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;

    int len = s.length();
    vector<int> newArr;
    for(int i=0;i<len;i++){
        if(s[i] == '1'){
            newArr.push_back(1);
        }
        else if (s[i] == '2')
        {
            newArr.push_back(2);
        }
        else if (s[i] == '3')
        {
            newArr.push_back(3);
        }
    }
    
    sort(newArr.begin(),newArr.end());

    string newS="";
    for(int i=0;i<newArr.size();i++){
        newS.append(to_string(newArr[i]) + "+");
    }
    newS.pop_back();
    cout<<newS<<endl;
    return 0;
}