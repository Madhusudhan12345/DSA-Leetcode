class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++) {
            totalSum=totalSum+nums[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++)
        {
            int rightSum=totalSum-leftSum-nums[i];
            if(leftSum==rightSum) {
                return i;
            }
            leftSum=leftSum+nums[i];
        }
        return -1;
    }
};