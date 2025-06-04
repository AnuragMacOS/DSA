/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include<iostream>
using namespace std;

void print19(int n)
{
  int space=0;
  for(int i=0;i<n;i++)
  {
    //for stars
    for(int j=0;j<n-i;j++)
    {
      cout<<"*";
    }
    //for space
    for(int j=0;j<space;j++)
    {
      cout<<" ";
    }
    //for stars
    for(int j=0;j<n-i;j++)
    {
      cout<<"*";
    }
    space=space+2;
    cout<<endl;
  }
  space=2*n-2;
  for(int i=0;i<n;i++)
    {
   
    //for stars
    for(int j=0;j<i+1;j++)
    {
      cout<<"*";
    }

    //for space
    for(int j=0;j<space;j++)
    {
      cout<<" ";
    }

    //for stars
    for(int j=0;j<i+1;j++)
    {
      cout<<"*";
    }
    space=space-2;
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
    print19(n);
  }

}
