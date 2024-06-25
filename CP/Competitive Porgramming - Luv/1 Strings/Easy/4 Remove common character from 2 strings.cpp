//https://practice.geeksforgeeks.org/problems/remove-character3815/1#

class Solution {
  public:
    string removeChars(string string1, string string2) {
        int strHash[26] = { 0 };
        string s;
        
        for(int i = 0;i<string2.length();++i){
            
            strHash[string2[i] - 'a']++;
        }
        
        for(int j = 0;j<string1.length();++j){
            if(strHash[string1[j] - 'a'] == 0){
                s.push_back(string1[j]);
            }
        }
        
        return s;
    }
};