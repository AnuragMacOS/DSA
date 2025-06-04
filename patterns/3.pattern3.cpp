/*
1
12
123
1234
*/

#include<iostream>
using namespace std;

void print3(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j;
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
    print3(n);
  }
}
