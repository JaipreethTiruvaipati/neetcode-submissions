class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        int n=s.length();
        while(i<j){
            if(i<n and !isalnum(s[i])){
                i++;
                continue;
            }
            if(j>=0 and !isalnum(s[j])){
                j--;
                continue;
            }
            char a=tolower(s[i]);
            char b=tolower(s[j]);
            if(a!=b){
                return false;
            }
            j--;
            i++;

        }
        return true;
    }
};
