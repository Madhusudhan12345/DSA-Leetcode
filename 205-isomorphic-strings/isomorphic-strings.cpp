class Solution {
public:
    bool isIsomorphic(string s, string t) {

        vector<int> sToT(128, -1);
        vector<int> tToS(128, -1);

        for(int i = 0; i < s.length(); i++) {

            if(sToT[s[i]] != -1 && sToT[s[i]] != t[i]) {
                return false;
            }

            if(tToS[t[i]] != -1 && tToS[t[i]] != s[i]) {
                return false;
            }

            // Store both mappings here
            sToT[s[i]]=t[i];
            tToS[t[i]]=s[i];

        }

        return true;
    }
};