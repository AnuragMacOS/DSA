#include <bits/stdc++.h>
using namespace std;

//take large number as input
//---for that we can take it as input in string
int main(){
  string s;
  cin>>s;
  // cout<<s[s.size()-1];--->7(the last number)
  int last_digit=s[s.size()-1]-'0'; //to get integer value we'll sub it with 0's ASCII value
  cout<<last_digit;
}



/*-------------------*/
/*-----Palindrome----
int main(){
  string str;
  cin>>str;
  string str_rev;
  for(int i=str.size()-1;i>=0;--i){
    str_rev.push_back(str[i]);
  }
  cout<<str_rev<<endl;
  if(str==str_rev){
    cout<<"palindrome";
  }
  else {
    cout<<"NO";
  }

} 
*/

/*------------*/


/* ---Reverse the String-----

int main(){
  string str;
  cin>>str;
  string str_rev;
  for(int i=str.size()-1;i>=0;--i){
    str_rev.push_back(str[i]);

  }
  cout<<str_rev;

} 
*/


/*------------*/


/* GET_LINE

int main(){
  int t;
  cin>>t;
  cin.ignore();//will print the whole 3 inputs
  
  while(t--){
    string s;
    getline(cin,s);
    cout<<s<<endl;
  }

}
  */