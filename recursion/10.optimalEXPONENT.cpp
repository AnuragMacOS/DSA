// this takes only 4 multiples 
//whereas previous took 9

#include<iostream>
using namespace std;

int pow(int m,int n)
{
  if(n==0)
  {
    return 1;
  }
  if(n%2==0)
  {
    return pow(m*m,(n/2));
  }
  else 
  return m* pow(m*m,(n-1)/2);
}

int main()
{
  int expo;
  expo=pow(2,9);
  cout<<"Exponent value is:"<<expo<<endl;
  return 0;
}