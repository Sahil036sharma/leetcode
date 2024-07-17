#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   vector<int> NSL(vector<int>& heights){
    int n=heights.size();
    vector<int> idx_NSL(n);
    stack<int> st;
    idx_NSL[0]=-1;
    st.push(0);

    for(int i=1;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i])
        st.pop();
        idx_NSL[i]=st.empty()?-1:st.top();
        st.push(i);
    } 

       return idx_NSL;
   }
     vector<int> NSR(vector<int>& heights){
        int n=heights.size();
        vector<int> idx_NSR(n);
        stack<int> st;
        idx_NSR[n-1]=n;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(!st.empty()&& heights[st.top()]>=heights[i]){
            st.pop();
            }

            idx_NSR[i] = st.empty() ?n: st.top();
            st.push(i);
         }

         return idx_NSR;
     }


    int largestRectangleArea(vector<int>& heights) {

        int n=heights.size();
        vector<int> idx_NSL=NSL(heights);
        vector<int> idx_NSR=NSR(heights);
        int res=0;
        for(int i=0;i<n;i++){
            int height=heights[i];
            int width=idx_NSR[i]-idx_NSL[i]-1;
            int Area=height*width;
            if(Area>res){
                res=Area;
            }
        }

        return res;
    }
};