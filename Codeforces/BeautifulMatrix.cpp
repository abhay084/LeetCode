//https://codeforces.com/problemset/problem/263/A

#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<vector<int>>arr;
    pair<int,int>p;
    for(int i=1;i<=5;i++){
        vector<int>x;
        int j=1;
        while(j<=5){
            int temp;
            cin>>temp;
            x.push_back(temp);
            if(temp == 1){
                p.first = i;
                p.second = j;
            }
            j++;
        }
    }
    int ans=0;

    if(p.first < 3){
        ans += (3-p.first);
    }
    else if (p.first >3)
    {
        ans+=abs(p.first -3);
    }


    if(p.second < 3){
        ans+=( 3 - p.second);
    }
    else if (p.second > 3)
    {
        ans+=abs(p.second - 3);
    }

    cout<<ans<<endl;

    return 0;
}