class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if (n == 0) {
            return "";
        }

        int index=0;
        for(int i=0;i<strs[0].size();i++){
            char common=strs[0][i];
            bool br=false;

            for(int j=0;j<n;j++){
                if(i>=strs[j].length()){
                     br=true;
                     index=i;
                     break;
                     
                }
                if(strs[j][i]!=common){
                     br=true;
                     index=i;
                     break;
                }
            }
            if(br)break;
            index=i+1;
        }
        return strs[0].substr(0,index);
    }
};