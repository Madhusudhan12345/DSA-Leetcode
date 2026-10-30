
class Solution
{
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        int n = nums.size();

        int totalSum = 0;

        // Step 1: Calculate the total sum
        for (int i = 0; i < n; i++)
        {
            totalSum = totalSum + nums[i];
        }

        int leftSum = 0;

        vector<int> answer;

        // Step 2: Calculate left and right sums
        for (int i = 0; i < n; i++)
        {
            int rightSum = totalSum - leftSum - nums[i];

            // Step 3: Store the absolute difference
            answer.push_back(abs(leftSum - rightSum));

            // Step 4: Update leftSum for the next index
            leftSum = leftSum + nums[i];
        }

        return answer;
    }
};