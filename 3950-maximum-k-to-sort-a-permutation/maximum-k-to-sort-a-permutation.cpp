class Solution {
public:
    int sortPermutation(vector<int>& nums) {
      int n=nums.size();
      int k=-1;
      bool found=false;
      for(int i=0;i<n;i++) {
        if(nums[i]!=i) {
            k=k&nums[i];
            found=true;
        }
      }
        if(!found) {
            return 0;
        }

      
      return k;
    }
};