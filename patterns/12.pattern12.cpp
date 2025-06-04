/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<iostream>
using namespace std;
void print12(int n)
{
  for(int i=1;i<=n;i++)
  {
    //numbers(left)
    for(int j=1;j<=i;j++)
    {
      cout<<j;
    }
    //space
    for(int j=1;j<=2*n-2*i;j++)
    {
      cout<<" ";
    }
    //number(right) just left ko opposite banuane..
    for(int j=i;j>=1;j--)
    {
      cout<<j;
    }
     cout<<endl;
  }
 } 
int main()
{
  int t;
  cout<<"no of test cases:"<<endl;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int n;
    cout<<"n:"<<endl;
    cin>>n;
    print12(n);
  }
}
  /*. another method
  mathi declare->int space=2*(n-1);//first dheki eti space cha
 // space-> for(int j=1;j<=space;j++);
  {cout<<"";}
  cout<<endl; 
  space=space-2;
    */