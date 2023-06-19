#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int index = linearSearch(arr,n,key);

    if(index != -1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is Not Present is given array!"<<endl;
    }
}