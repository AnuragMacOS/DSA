/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include<iostream>
using namespace std;

void print20(int n)
{
  int space=2*n-2;
  for(int i=1;i<=2*n-1;i++)
  {
    int stars=i;
    if(i>n)
    { stars=2*n-i;}
      //stars
      for(int j=1;j<=stars;j++)
      {  cout<<"*"; }
      //spaces
      for(int j=1;j<=space;j++)
      { cout<<" ";}
      //stars
      for(int j=1;j<=stars;j++)
      {cout<<"*";}
    cout<<endl;
    if(i<n)space=space-2;
    else space=space+2;
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
    cout<<"n:"<<endl;
    cin>>n;
    print20(n);
  }
}