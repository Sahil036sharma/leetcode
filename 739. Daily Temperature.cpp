#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> NGR(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> idx_NGR(n);
        stack<int> st;
        idx_NGR[n-1]=-1;
        st.push(n-1);

        for(int i=n-2; i>=0; i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            idx_NGR[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return idx_NGR;
    }

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> idx_NGR = NGR(temperatures);
        vector<int> res(n);
        for(int i=0; i<n; i++){
            if(idx_NGR[i] == -1){
                res[i] = 0;
            }else{
                res[i]=idx_NGR[i]-i;
            }
        }
        return res;
    }
};