#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<int> &arr, int val){
    int s = 0;
    int e = arr.size() - 1;
    int ans =-1;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] <= val){
            ans = arr[mid];
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int LowerBound(vector<int> &arr, int val){
    int  s =0;
    int e = arr.size() - 1;

    while(s<e){
        if(arr[s] == val){
            return arr[s];
        }
        else if (arr[s] < val)
        {
            s++;
        }
    }

    if(arr[s] > val){
        return arr[s-1];
    }

    return arr[s];
}

int main(){
    int n;
    cin>>n;

    int val;
    cin>>val;

    vector<int> arr;
    while(n--){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    n = arr.size();

    //cout<<LowerBound(arr,val)<<endl;
    cout<<BinarySearch(arr,val)<<endl;
    return 0;
}