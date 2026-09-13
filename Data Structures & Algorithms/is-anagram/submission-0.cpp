class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr1(26);
        vector<int>arr2(26);
        for(auto v:s){
            arr1[v-'a']++;
        }
        for(auto v:t){
            arr2[v-'a']++;
        }
      for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
      }
      return true;
    }
};
