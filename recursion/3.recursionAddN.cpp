#include<iostream>
using namespace std;

int fun(int n)
{
  if(n>0)
  {
     return fun(n-1)+n;
  }
  return 0;
}
int main() 
{
  int x=5;
  cout<<fun(x)<<endl;
}


/*
     fun(5)
     /      \
     fun(4)+5=15
     /    \
     fun(3) +4 =10
     /     \
     fun(2) +3 =6
     /     \
     fun(1) +2  =3 
     /     \
     fun(0) +1  =1 //here n was 1 and n-1=0
     
     */