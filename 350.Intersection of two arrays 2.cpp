#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int, int> mp;
        for (int num : nums1) {
            mp[num]++;
        }
        for (int num : nums2) {
            if (mp.find(num)!= mp.end() && mp[num] > 0) {
                ans.push_back(num);
                mp[num]--; 
            }
        }
        
        return ans;
    }
};



