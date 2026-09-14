class Solution {
public:
    bool isPallindrome(int i, int j,string s){
      while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            return false;
        }
      }                  
      return true;             
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while( i<j and s[i]==s[j]){
            i++;
            j--;
        }
        return isPallindrome(i+1,j,s)or isPallindrome(i,j-1,s);


    }
};