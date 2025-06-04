#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  // else if(n==1)
  // {
  //   return 1;
  // }
  else {
      return fact(n-1)*n;
   }
}

int main()
{
  int result;
  result=fact(5);
  cout<<result<<endl;
  return 0;
}

/* ITERATIVE VERSION

  int Ifact(int n)
{

  int f=1;
  int i;
   if(n==0)
  {
    return 1;
  }
  for(i=1;i<=n;i++)
     f=f*i;
     return f;
*/
