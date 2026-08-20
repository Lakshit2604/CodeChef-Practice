# include <iostream>
using namespace std;

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return nums;
        vector<int> a1 = {nums[0]};
        vector<int> a2 = {nums[1]}; 
        for (int i = 2; i < n; i++){
            if (a1.back() > a2.back()) a1.push_back(nums[i]);
            else a2.push_back(nums[i]);
        }
        for (int i : a2) a1.push_back(i);
        return a1;
    }
};