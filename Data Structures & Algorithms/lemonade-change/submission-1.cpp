class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0;
        int ten=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            if(bills[i]==10){
                if(five>0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }
            if(bills[i]==20){
                if(five>0 and ten>0){
                    five--;
                    ten--;
                }else if(ten==0 and five>2){
                    five=five-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};