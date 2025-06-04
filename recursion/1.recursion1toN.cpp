/*there must be a basic condition inside the function
which can stop th erecursion otherwise it will 
go on infinite loop*/

/*RECUSION HAS 2 PHASE ,CALLING PHASE AND RETURNING PHASE*/
#include<iostream>
using namespace std;

void fun1(int n)
{
if(n>0)
{
  fun1(n-1);
  cout<<n<<endl;
 }
} 

int main()
{
 int x=5;
 fun1(x);
}