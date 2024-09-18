#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n=nums.size();
        int maxsum=INT_MIN;
        int cur_sum=0;

        for(int i=0;i<n;i++){
            cur_sum+=nums[i];

            if(cur_sum>maxsum){
                maxsum=cur_sum;
            }
            if(cur_sum< 0){
                cur_sum=0;
            }
        }
        return maxsum;
    }
};