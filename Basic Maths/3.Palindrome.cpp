//palindrome mean reverse of 121 is 121 or pop ko reverse pop\

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a number :";
  cin>>n;
  int dup=n;
  int revN=0;
  while(n>0)
  {
    int lastDigit=n%10;
    revN= (revN*10) + lastDigit;
    n=n/10;
  }
  if(revN==dup)
  cout<<"The number is palindrome"<<endl;
  else
  cout<<"the number is not palindrome"<<endl;
  return 0;
}