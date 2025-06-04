#include<iostream>
using namespace std;

int fun(int n)
{
  static int x=0;
  if(n>0)
  {
    x++;
    return fun(n-1)+x;
  }
 return 0;
}
int main() 
{
  int x=5;
  cout<<fun(x)<<endl;
}

/* aba yesma harek sanga 5 add huncha 
fun0 sanga 5 add,fun1 sanga and all
sabai fun sanga 5 add vaye 25 answer simce 
they're willl be 5fun */  