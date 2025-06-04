#include<iostream>
using namespace std;

int pow(int m,int n)
{
  if(n==0)
  {return 1;}
  else{
  return pow(m,n-1)*m;
  }
}
int main()
{
  int expo;
  expo= pow(2,9);
  cout<<"Exponient is:"<<expo<<endl;
  return 0;
}