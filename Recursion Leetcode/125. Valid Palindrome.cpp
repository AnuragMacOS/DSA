class Solution {
public:
    
    bool help(string &s, int left, int right){
        if(left>=right) return true;
        if(!isalnum(s[left])) return help(s,left+1,right);
        if(!isalnum(s[right])) return help(s,left,right-1);

        if(tolower(s[left]) !=tolower(s[right])) return false;

        return help(s,left+1,right-1);
    }
    
   bool isPalindrome(string s) {
       int left=0;
       int right = s.size();
       return help(s,left,right);    
    }
};