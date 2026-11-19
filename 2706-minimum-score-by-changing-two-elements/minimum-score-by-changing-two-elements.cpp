class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        int secondLargest=INT_MIN;
        int thirdLargest=INT_MIN;

        int smallest=INT_MAX;
        int secondSmallest=INT_MAX;
        int thirdSmallest=INT_MAX;
        for(int i=0;i<n;i++) {
            if(nums[i]> largest) {
                thirdLargest=secondLargest;
                secondLargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>secondLargest) {
                thirdLargest=secondLargest;
                secondLargest=nums[i];
            }
            else if(nums[i]> thirdLargest){
                thirdLargest=nums[i];

            }
            if(nums[i]<smallest) {
                thirdSmallest=secondSmallest;
                secondSmallest=smallest;
                smallest=nums[i];
            }
            else if(nums[i]<secondSmallest) {
                thirdSmallest=secondSmallest;
                secondSmallest=nums[i];
            }
            else if(nums[i]<thirdSmallest) {
                thirdSmallest=nums[i];
            }
        }
            int ans1=largest-thirdSmallest;
            int ans2=secondLargest-secondSmallest;
            int ans3=thirdLargest-smallest;
      return min(ans1,min(ans2, ans3));

    }
};