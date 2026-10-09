class Solution {
public:
    int minInsertions(string s) {
        int insertions=0;
        int need=0;

        for(int i=0;i<s.size();i++) {
            if(s[i]=='(') {
                need=need+2;
            
             if(need%2!=0) {
                insertions++;
                need--;
             }
           }  else {
                need--;

                if(need<0) {
                    insertions++;
                    need=1;
                }
             }

        }
        return insertions+need;
    }
};