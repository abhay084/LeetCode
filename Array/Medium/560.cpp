#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    cout<<"Enter the target sum: ";
    int k;
    cin>>k;

    int ans=0;

    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++){
            cnt+=nums[j];    

            if (cnt==k)
            {
                ans++;
                continue;
            }

        }
        cnt=0;
    }

    cout<<"The number of subarrays with sum "<<k<<" is "<<ans<<endl;
    
    
}