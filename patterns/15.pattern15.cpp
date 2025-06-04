/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include<iostream>
using namespace std;

void print15(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(char ch='A';ch<='A'+ (n-i); ch++)
    {
      cout<<ch<<" ";
    }
      cout<<endl;
  }
  
  }
int main()
{
  int t;
  cout<<"no of test cases:"<<endl;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n;
    cout<<"n:";
    cin>>n;
    print15(n);
  }
}