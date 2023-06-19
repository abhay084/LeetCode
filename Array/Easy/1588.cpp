//1588. Sum of All Odd Length Subarrays
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr={1, 4, 2, 5, 3};

    vector<int> temp;


    // print all subarrays

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=i;
            while(k<j){
                temp.push_back(arr[i]);
                k++;
            }

            for(int m=0;i<temp.size();m++){
                cout<<temp[m]<< " "; 
            }
            cout<<endl;

            temp.clear();
        }
        
    }

    // int sum=0;

    // for(int i=0;i<n;i++){

    //     for(int j=i;j<n;j++){
    //         temp.push_back(arr[j]);
    //         if(temp.size()%2 == 1){
    //             // do something
    //             for(auto it:temp){
    //                 sum+=it;
    //             }
    //         }
    //     }
    //     temp.clear();
    // }

    // cout<<sum<<" "<<endl;

    return 0;
}