#include<iostream>

using namespace std;

void printDecresing(int n){
    if(n<1){
        return;
    }

    cout<<n<<" ";
    printDecresing(n-1);
}

void printIncreasing(int n){
    if(n<1){
        return;
    }
    printIncreasing(n-1);
    cout<<n<<" ";

}

int main(){
    int n;
    cin>>n;

    printDecresing(n);
    cout<<endl;
    printIncreasing(n);

    return 0;
}