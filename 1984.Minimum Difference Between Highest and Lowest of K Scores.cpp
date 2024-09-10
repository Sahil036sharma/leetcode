class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n =nums.size();
        if(k==1)return 0;
        int mindiff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-k;i++){
            int diff=nums[i+k-1]-nums[i];
            mindiff=min(mindiff,diff);
        }
        return mindiff;
    }
};