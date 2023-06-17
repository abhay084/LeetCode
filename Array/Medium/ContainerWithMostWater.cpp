#include<iostream>
#include<vector>

using namespace std;

int maxContainer(vector<int> &height) {
    int left = 0;
    int right = height.size() - 1;

    int maxHold = 0;

    while (left < right) {
        int currHold = std::min(height[left], height[right]) * (right - left);
        maxHold = std::max(maxHold, currHold);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return maxHold;
}

int main(){
    int n;
    cin>>n;

    vector<int> heights;

    while(n--){
        int temp;
        cin>>temp;
        heights.push_back(temp);
    }

    cout<<maxContainer(heights)<<endl;

    return 0;
}
