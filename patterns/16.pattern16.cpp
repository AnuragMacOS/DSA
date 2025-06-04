/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/

#include<iostream>
using namespace std;

void print16(int n)
{
  for(int i=0;i<n;i++)
  {
    char ch='A'+i;
    for(int j=0;j<=i;j++)
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
    print16(n);
  }
}