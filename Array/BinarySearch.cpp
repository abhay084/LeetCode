// Binary Search only works for sortted arrays

#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return -1;
}

int main(){

    int arr[5] = {10,15,20,30,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 10;

    int index = BinarySearch(arr,n,key);

    if(index != -1){
        cout<<key<<" is Present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is Not Found in given array."<<endl;
    }

    return 0;
}