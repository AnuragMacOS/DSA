/*
12345
1234
123
12
1*/
#include<iostream>
using namespace std;

void print4(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i+1;j++)
    {
      cout<<j<<" ";
    
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
    print4(n);
  }

}

