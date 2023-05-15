//1389. Create Target Array in the Given Order
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> nums(n);
    vector<int> index(n);

    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"Enter elements of index array: ";

    for(int i=0;i<n;i++){
        cin>>index[i];
    }

    vector<int> ans(n);

    for(int i=0;i<n;i++){
        ans.insert(ans.begin()+index[i],nums[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }   

    
}