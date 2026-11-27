class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> ans(n);
        for(int i = 1; i < n; i++){
            leftSum[i] = leftSum[i - 1] + nums[i - 1];   
        }
        for(int j = n - 2; j >= 0; j--){
            rightSum[j] = rightSum[j + 1] + nums[j + 1];
        }
        for(int k = 0; k < n; k++){
            ans[k] = abs(leftSum[k] - rightSum[k]);
        }
        return ans;
    }
};