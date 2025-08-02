17. Letter Combinations of a Phone Number

class Solution {
public:
    vector<string> letterCombinations(string digits) {
       if (digits.empty()) return{};

        string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
                      //{ 0 , 1--------------------------------------------, 9   }
        vector<string> result;
        string output="";
        printkeypad(digits,0,output,options,result);
        return result;
    } 
    
    void printkeypad(string&digits,int index,string output,
                     string options[],vector<string>&result){

       if(index==digits.length()){
          result.push_back(output);
         return;
       }
       string s1= options[digits[index]-'0'];
        for (int i = 0; i < s1.length(); i++) {
          printkeypad(digits, index + 1, output + s1[i], options, result);
        }
    }
};