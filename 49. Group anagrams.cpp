class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& vs) {
        unordered_map<string,vector<string>>mp;
        int n=vs.size();
        for(int i=0;i<n;i++){
            string temp=vs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(vs[i]);
        }
        vector<vector<string>>ans;
        for(auto it: mp){
         vector<string>v=it.second;
         ans.push_back(v);
        }
        return ans;
    }
};