/*this approach is called memoization 
basically what we're doing is ,we're storing 
the value of the previous operation 
BY RECUSIVE APPROACH -> there were 15 calls (n=5)
but BY MEMOIZATION -> there will be only 6 calls

n=5. calls n+1=6.  O(n)
*/

#include<iostream>
using namespace std;


int fib(int n)
{
  int F[10];

  if (n<=1)
  {
    return n;
  }
  if(F[n-2]==-1)
  {
    return F[n-2]=fib(n-2);
  }
   if(F[n-1]==-1)
  {
    return F[n-1]=fib(n-1);
  }
  else 
 {
   return fib(n-2)+ fib(n-1);
 }

}

int main()
{
  int result;
  result=fib(5);
  cout<<"fibonacci is:"<<result<<endl;
  return 0;
}