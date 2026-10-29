class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currentSum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++) {
            int x=nums[i];
            currentSum=max(x,currentSum+x);
            maxSum=max(currentSum,maxSum);
        }
        return maxSum;
    }
};