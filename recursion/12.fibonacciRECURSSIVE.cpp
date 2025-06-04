#include<iostream>
using namespace std;

int fib(int n)
{
  if(n<=1)
  {
    return n;
  }
else
    return fib(n-2) + fib(n-1);
}
int main()
{
  int result;
  result=fib(7);
  cout<<result<<endl;
  return 0;
}


// O(2^n)