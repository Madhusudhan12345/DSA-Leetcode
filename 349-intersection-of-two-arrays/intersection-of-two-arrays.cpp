class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;

        for(int i = 0; i < nums1.size(); i++) {

            bool found = false;

            for(int j = 0; j < nums2.size(); j++) {

                if(nums1[i] == nums2[j]) {

                    for(int k = 0; k < answer.size(); k++) {

                        if(answer[k] == nums1[i]) {
                            found = true;
                            break;
                        }
                    }

                    if(found == false) {
                        answer.push_back(nums1[i]);
                    }

                    break;
                }
            }
        }

        return answer;
    }
};