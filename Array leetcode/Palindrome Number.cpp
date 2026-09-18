class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){return false;}
        long revNum=0;
        int dup=n;
        while(n!=0){
            int lastdigit = n%10;
            revNum=(revNum*10)+lastdigit;
            n=n/10;
        }
         if(revNum==dup){
            return true;
        }
        else
            { return false; }        
 }      
};