/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include<iostream>
using namespace std;

void print13(int n)
{
  int num=1;//begining ma

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++) //jati row num teti column
    {
      cout<<num<<" ";
      num=num+1;
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
    print13(n);
  }
}