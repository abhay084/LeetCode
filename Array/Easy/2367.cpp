//2367. Number of Arithmetic Triplets
#include<iostream>
#include<vector>
using namespace std;

int arithmeticTriplet(vector<int> nums, int diff){

    int i,j,k;
    int cnt=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            k=j+1;
            while (k<n)
            {
                if((nums[j] - nums[i] == diff ) && (nums[k] - nums[j] == diff)){
                    cnt++;
                }
                k++;
            }
            
        }
    }

    return cnt;
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int diff;
    cin>>diff;

    cout<<arithmeticTriplet(nums,diff)<<endl;

    return 0;

}