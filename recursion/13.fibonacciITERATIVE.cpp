#include<iostream>
using namespace std;


int fib(int n) 
{
  int tO=0,t1=1,sum,i; //ter0,term1
  if(n<=1) 
{
  return n;
}
for(i=2;i<=n;i++)
{
  sum=tO+t1;
  tO=t1;
  t1=sum;
}
return sum;
}

int main()
{
 int result;
 result=fib(5);
 cout<<"Fibonacci value:"<<result<<endl;
  return 0;
}