class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i-1]) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
        // Check if the array can be rotated to form a non-decreasing array
        if (count == 1) {
            if (nums[nums.size() - 1] > nums[0]) {
                return false;
            }
        }
        return true;
    }
};