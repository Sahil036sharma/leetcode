#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(j==1 || nums[i]!=nums[j-2]){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};