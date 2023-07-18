#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    if(n==0){
        return -1;
    }

    if(arr[0] == key){
        return 0;
    }

    int subIndex = firstOccurence(arr+1,n-1,key);
    if(subIndex!=-1){
        return subIndex+1;
    }

    return -1;
}

int main(){
    int n;
    cin>>n;
    
    int key;
    cin>>key;

    int* myArr = new int[n];

    for(int i=0;i<n;i++){
        cin>>myArr[i];
    }

    cout<<firstOccurence(myArr,n,key)<<endl;
    return 0;

}