#include<iostream>
#include<vector>
using namespace std;


bool checkDense(vector<int> arr,int i){

    int val;
    val = max(arr[i],arr[i+1])/min(arr[i],arr[i+1]);

    if(val <= 2 ){
        return true;
    }

    return false;
}

vector<int> makeDense(vector<int> arr, int i) {
    int val = min(arr[i], arr[i + 1]);
    while (val * 2 < max(arr[i], arr[i + 1])) {
        val *= 2;
    }

    arr.insert(arr.begin() + i+1, val);
    if (checkDense(arr, i)) {
        return arr;
    } else {
        return makeDense(arr, i);
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<arr.size()-1;i++){
            if (checkDense(arr,i))  
            {
                continue;
            }
            else{
                arr = makeDense(arr,i);
            }
        }


        int l = arr.size();
        cout<<l-n<<endl;
        arr.clear();
    }

    return 0;
}