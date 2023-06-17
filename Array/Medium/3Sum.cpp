#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
vector<vector<int>> res;
set<vector<int>> VectorSet;
vector<int> temp;
int n = nums.size();

for (int i = 0; i < n / 2 + 1; i++) {
    int left = i + 1;
    int right = n - 1;

    while (left < right) {
        int x = nums[left] + nums[right];
        if (nums[i] + x > 0) {
            if (nums[left] > nums[right]) {
                left++;
            } else {
                right--;
            }
        } else if (nums[i] + x < 0) {
            if (nums[left] > nums[right]) {
                right--;
            } else {
                left++;
            }
        } else {
            temp.push_back(nums[i]);
            temp.push_back(nums[left]);
            temp.push_back(nums[right]);
            sort(temp.begin(), temp.end());
            VectorSet.insert(temp);
            temp.clear();
            left++;
            right--;
        }
    }
}

for (const auto& vec : VectorSet) {
    res.push_back(vec);
}

return res;

}

int main(){
    int n;
    cin>>n;

    vector<int> nums;

    while(n--){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    vector<vector<int>> arr = threeSum(nums);


    return 0;
}