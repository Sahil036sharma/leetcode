// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         unordered_map<int,int>mp;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(auto it:mp){
//                   if(nums1[i]==nums2[j])
//                    ans.push_back(nums1[i]);
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int num : nums1) {
            mp[num]++;
        }
        for (int num : nums2) {
            if (mp.find(num)!= mp.end() && mp[num] > 0) {
                ans.push_back(num);
                mp[num] = 0; 
            }
        }
        
        return ans;
    }
};