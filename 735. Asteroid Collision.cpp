class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;

        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(nums[i]);
            } else {
                bool flag=false;
                while(!st.empty() && st.top()>0 && nums[i]<0) {
                    if(abs(st.top())>abs(nums[i])) {
                        flag = true;
                        break;
                    } else if(abs(st.top()) == abs(nums[i])) {
                        st.pop();
                        flag=true;
                        break;
                    } else if(abs(st.top() < abs(nums[i]))) {
                        st.pop();
                    }
                }
                if(!flag) {
                    st.push(nums[i]);
                }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};