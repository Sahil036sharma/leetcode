class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int maxlength=0;

        int open=0;
        int close=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')'){
                close++;
            }

            if(open == close){
                maxlength=max(maxlength,2*close);
            }
            else if(close>open){
                open=close=0;
            }
        }
        //right to left

        open=close=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(open==close){
                maxlength=max(maxlength,2*open);
            }
            else if(open>close){
                open=close=0;
            }
        }
        return maxlength;
    }
};