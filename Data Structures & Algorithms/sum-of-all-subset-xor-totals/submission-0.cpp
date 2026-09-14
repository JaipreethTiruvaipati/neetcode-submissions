class Solution {
public:
    vector<vector<int>>arr;
    vector<int>brr;
    void rec(int i, vector<int>&nums){
        if(i==nums.size()){
            arr.push_back(brr);
            return ;
        }
        rec(i+1,nums);
        brr.push_back(nums[i]);
        rec(i+1,nums);
        brr.pop_back();
    }
    int xorSum(vector<int>&crr){
        int ans=0;
        for(auto v:crr){
            ans=ans^v;
        }
        return ans;
    }
    int subsetXORSum(vector<int>& nums) {
        
        rec(0,nums);
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=xorSum(arr[i]);
        }
        return ans;
    }
};