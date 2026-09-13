class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=n-1;

        while( j>=0 and nums[j]==val){
            j--;
        }
        while(i<j){
            if(i<n and nums[i]!=val){
                i++;
            }else{
                swap(nums[i],nums[j]);
                while(i<n and nums[i]!=val){
                    i++;
                }
                 while(j>=0 and nums[j]==val){
                  j--;
                 }
            }
        }
        return j+1;
    }
};