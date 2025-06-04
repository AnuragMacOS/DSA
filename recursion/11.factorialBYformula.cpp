#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  else if(n==1)
  {
    return 1;
  }
  else {
      return n * (n-1);
   }
}

int main()
{
  int result;
  result=fact(1);
  cout<<result<<endl;
  return 0;
}
