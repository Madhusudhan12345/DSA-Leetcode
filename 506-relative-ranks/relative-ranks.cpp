class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> answer(n);
        for(int i=0;i<n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(score[j]>score[i]) {
                    count++;
                }
            }
            if(count==0) {
                answer[i]="Gold Medal";
            }
            else if(count==1) {
                answer[i]="Silver Medal";
            }
            else if(count==2) {
                answer[i]="Bronze Medal";
            }
            else {
                answer[i]=to_string(count+1);
            }
        }
        return answer;
    }
};