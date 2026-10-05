class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        function<void(string,int,int)> backtrack;
        backtrack=[&] (string current, int open, int close) {
            if(open==n && close==n) {
                ans.push_back(current);
                return ;
            }
            if(open<n) {
                current=current+'(';
                open++;
                backtrack(current,open,close);
                current.pop_back();
                open--;
            }
            if(close<open) {
                current=current+')';
                close++;
                backtrack(current,open,close);
                current.pop_back();
                close--;
            }

        };
        backtrack("",0,0);
        return ans;
    }
};