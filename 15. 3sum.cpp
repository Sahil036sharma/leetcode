#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(),nums.end());

    for(int i=0;i<n-2;i++){

    if(i==0 || (i>0 && nums[i]!=nums[i-1])){
    int low =i+1;
    int high=n-1;
    int target=-nums[i];

    while(low<high){
        if(nums[low]+nums[high]==target){
            result.push_back({nums[i],nums[low],nums[high]});
        
     while (low < high && nums[low] == nums[low + 1]) low++;
    while (low < high && nums[high] == nums[high - 1]) high--;
                    
                    low++;
                    high--;
                } else if (nums[low] + nums[high] < target) {
                    low++;
                } else {
                    high--;
                }
    }
    }
    }
    return result;
    }
    
};
