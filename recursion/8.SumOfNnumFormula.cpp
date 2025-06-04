//this is the fastest method ;O(1)

#include<iostream>
using namespace std;

int sum(int n)
{
  if(n==0)
  {
    return 0;
  }
  else 
  {
    return n * (n+1)/2;
  }
}

int main()
{
   int result;
   result=sum(7);
   cout<<"result:"<<result<<endl;
  return 0;
}