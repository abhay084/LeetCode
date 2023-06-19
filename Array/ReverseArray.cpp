#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[],int n){
    int s = 0;
    int e = n - 1;

    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }

}

int main(){
    int arr[]={10,20,30,40,50,60,70};

    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    cout<<endl;
    reverseArray(arr,n);
    printArray(arr,n);

    return 0;
}