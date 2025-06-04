#include<iostream>
using namespace std;

void fun2(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    fun2(n-1);
   
  }
}
int main()
{
  int x=5;
  fun2(x);
 
}