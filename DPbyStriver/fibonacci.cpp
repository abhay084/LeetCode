#include<iostream>
#include<vector>

using namespace std;

// function to find fibo of n using recursion
int fibo(int n){
    if(n<=1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

//fibo using DP memorization
int mFibo(int n, vector<int>& arr){
    
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n,-1);

    cout<<endl;
    cout<<fibo(n)<<endl;
    dp[0] = 0;
    dp[1] = 1;



}