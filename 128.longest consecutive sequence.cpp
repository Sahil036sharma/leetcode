class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int len=0;
        for(int i=0;i<n;i++){
            int start=nums[i];
            if(mp.count(start-1)==0){
                int cnt=0;
                while(mp.count(start)){
                    cnt++;
                    start+=1;
                }
                if(cnt>len){
                    len=cnt;
                }
            }
        }
            return len;
    }
};