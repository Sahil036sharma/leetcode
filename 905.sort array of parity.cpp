#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int start=0, end=n-1;
        while(start<end){
            if(nums[start]%2==0){
                start++;
            }
            else{
                swap(nums[start],nums[end]);
                end--;
            }
        }
        return nums;
    }
};