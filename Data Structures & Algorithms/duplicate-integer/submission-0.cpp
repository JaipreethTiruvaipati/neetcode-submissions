class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto v:nums){
            st.insert(v);
        }
        if(st.size()==nums.size())return false;
        return true;
    }
};