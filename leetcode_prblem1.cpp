#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int s =nums.size();
    int m=0;
    int n=0;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(nums[i]+nums[j]==target){
              m=i;
              n=j;
                break;
            }
        }
    }
    return{m,n};
    }
};