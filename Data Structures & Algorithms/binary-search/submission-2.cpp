class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto itt=lower_bound(nums.begin(),nums.end(),target);
        if(itt==nums.end())return -1;
        if(*itt==target){
            return itt-nums.begin();
        }
        
        return -1;
    }
};
