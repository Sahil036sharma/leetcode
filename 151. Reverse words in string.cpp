#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string> st;
        string word="";
        for(int i=0; i<n; i++) {
            if(s[i]!=' '){
                word+=s[i];
            } else {
                if(word.size()>0){
                    st.push(word);
                }
                word="";
            }
        }

        if(word.size()>0) {
            st.push(word);
        }

        s.clear();

        while(!st.empty()){
            s+=st.top();
            st.pop();
            s+=" ";
        }
        s.pop_back();
        return s;
    }
};