//1313. Decompress Run-Length Encoded List

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> ans;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    if (n%2 != 0)
    {
        cout<<"Invalid input";
        return -1;
    }
    else{

        for(int i=0;i<n;i+=2){
            int freq = nums[i];
            int val = nums[i+1];

            for(int j=0;j<freq;j++){
                ans.push_back(val);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
}