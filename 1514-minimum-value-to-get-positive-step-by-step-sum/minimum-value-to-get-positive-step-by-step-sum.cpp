class Solution {
public:
    int minStartValue(vector<int>& nums) {
       int n=nums.size();
       int sum=0;
       int minSum=0;
       for(int i=0;i<n;i++) {
        sum=sum+nums[i];
        if(sum<minSum) {
            minSum=sum;
        }
       } 
       return 1- minSum;
    }
};