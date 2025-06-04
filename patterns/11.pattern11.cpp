/*
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;

void print11(int n)
{
  int start=1;

  for(int i=1;i<=n;i++)
  {
    if(i%2==0) //row even vaye 0 dheki start
    {
      start=0;
    }
    else{      //row odd vaye 1 dheki start
      start=1;
    }
    for (int j=1;j<=i;j++)
    {
      cout<<start;
      start=1-start;

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
    cout<<"n:"<<endl;
    cin>>n;
    print11(n);
  }
}