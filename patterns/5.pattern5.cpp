/*
*****
****
***
**
**/
#include<iostream>
using namespace std;

void print5(int n)
{
  for(int i=n;i>=1;i--) //OR (i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++) //(j=1;j<=n-i+1;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}

int main()
{
  int t;
  cout<<"num of test cases:";
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cout<<"num of lines:";
    cin>>n;
    print5(n);
  }
  return 0;
}