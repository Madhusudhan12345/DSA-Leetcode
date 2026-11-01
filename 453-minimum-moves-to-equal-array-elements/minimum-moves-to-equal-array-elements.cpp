class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int moves=0;
        int minimum=*min_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            moves=moves+(nums[i]-minimum);
        }
        return moves;
    }
};