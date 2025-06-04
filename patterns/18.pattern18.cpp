/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/

#include<iostream>
using namespace std;

void print18(int n)
{

//for rows
  for(int i=0;i<n;i++)
  {
    for(char ch='E'-i;ch<='E';ch++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  int t;
  cout<<"no.of test cases:";
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cout<<"no.of lines:";
    cin>>n;
    print18(n);
  }

}
