/*
    *
   ***        
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

void print7(int n)
{

//for rows
  for(int i=0;i<n;i++)
  {
    //for space
    for(int j=0;j < 5-i-1;j++)
    {
      cout<< " ";
    }
    //for stars
    for(int j=0;j< 2*i+1;j++)
    {
      cout<<"*";
    }
    //for space
    for(int j=0;j< 5-i-1;j++)
    {
      cout<< " ";
    }

    cout<<endl;
  }
}
void print8(int n)
{

//for rows
  for(int i=0;i<n;i++)
  {
    //for space
    for(int j=0;j < i;j++)
    {
      cout<< " ";
    }
    //for stars
    for(int j=0;j< 2*n-(2*i+1);j++)
    {
      cout<< "*";
    }
    //for space
    for(int j=0;j<i;j++)
    {
      cout<< " ";
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
    print7(n);
    print8(n);
  }

}

