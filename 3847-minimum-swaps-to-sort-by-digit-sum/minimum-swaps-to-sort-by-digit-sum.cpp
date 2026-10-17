class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<array<int, 3>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i], i});
        }

        sort(arr.begin(), arr.end());

        vector<int> target(n);
        for (int i = 0; i < n; i++) {
            target[arr[i][2]] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || target[i] == i) continue;

            int j = i, cycle = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = target[j];
                cycle++;
            }

            swaps += cycle - 1;
        }

        return swaps;
    }
};