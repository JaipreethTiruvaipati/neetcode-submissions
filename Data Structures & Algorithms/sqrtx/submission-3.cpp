class Solution {
public:
    bool check(int mid,int x){
        long long val=1LL*mid*mid;
        if(val>=x){
            return true;
        }
        return false;
    }
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,x)){
                 ans=mid;
                 high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(1LL*ans*ans==x)
        return ans;
        return ans-1;
    }
};