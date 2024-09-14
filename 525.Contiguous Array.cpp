#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int c1=0 ,c0=0;

        unordered_map<int,int>countMap{{0,-1}};
        for(int i=0;i<n;i++){
            if(nums[i]==0)c0++;
            else c1++;
            int diff=c0-c1;
            if(countMap.find(diff)!=countMap.end()){
            ans=max(ans,i-countMap[diff]);
            }
            else{
                countMap[diff]=i;
            }
        }
        return ans;
    }
};