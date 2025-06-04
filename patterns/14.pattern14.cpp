/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/
#include<iostream>
using namespace std;

void print14(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(char ch='A';ch<'A'+ i; ch++)
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
    print14(n);
  }
}