#include<iostream>

using namespace std;

void BubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i] < arr[i+1]){
            continue;
        }
        else{
            for(int j=0;j<n-i-1;j++){
    
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }

        }

    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5 };

    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);

    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}