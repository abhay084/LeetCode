#include<iostream>

using namespace std;

bool notPresent(int arr[],int x,int n){

    for(int i=0;i<n;i++){
        if (arr[i] == x){
            return false;
        }
        
       
    }
     return true;
}

int main(){
    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i] <<" ";
    // }

    int div[]={3,5,7};
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i] = 0;
    }

    int sum=0;
    int k=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(arr[j]%div[i] == 0){
                if (notPresent(ans,arr[j],n)){
                    ans[k] = arr[j];
                    k++;
                }
                
            }
        }
    }

    // for(int i=0;i<3;i++){
    //     int x = div[i];
    //     for(int j=0;j<n;j++){
    //         int y = arr[j];
    //         if(y%x == 0){
    //             sum+=arr[j];
    //         }
            
    //     }
    // }

    int len = sizeof(ans)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        sum+=ans[i];
    }

    cout<<sum<<endl;

}