class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums;
    }
};