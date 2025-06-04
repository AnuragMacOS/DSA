#include<iostream>
using namespace std;

int sum(int n)
{
  if(n==0)
  { return 0;}
  else
   return sum(n-1)+n;
}
int main()
{
  int result;
  result=sum(7 );
  cout<<result<<endl;
  return 0;
}

//O(1)