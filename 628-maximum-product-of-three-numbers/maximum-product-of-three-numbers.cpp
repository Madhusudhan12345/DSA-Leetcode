class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        int secondLargest=INT_MIN;
        int thirdLargest=INT_MIN;

        int smallest=INT_MAX;
        int secondSmallest=INT_MAX;
        

        for(int i=0;i<n;i++) {
            int x=nums[i];
            if(x>largest) {
                thirdLargest=secondLargest;
                secondLargest=largest;
                largest=x;
            }
            else if(x>secondLargest) {
                thirdLargest=secondLargest;
                secondLargest=x;
            }
            else if(x>thirdLargest) {
                thirdLargest=x;
            }

            if(x<smallest) {
                secondSmallest=smallest;
                smallest=x;
            }
            else if(x<secondSmallest) {
                secondSmallest=x;
            }

        }
        int product1=largest*secondLargest*thirdLargest;
        int product2=smallest*secondSmallest*largest;
        return max(product1,product2);
    }
};