class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto v: nums){
            mp[v]++;
        }
        for(auto v:nums){
            if(mp[v]>n/2){
                return v;
            }
        
        }

      return 0;
    }
};