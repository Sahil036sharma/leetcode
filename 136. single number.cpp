#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i+=2){
         if(nums[i]!=nums[i+1]){
           return nums[i];
         }
        }
        return nums[n-1];
    }  
};