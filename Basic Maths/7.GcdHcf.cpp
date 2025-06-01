// any number will have GCD/HCF of 1 by default

#include<iostream>
using namespace std;

void GCD(int a, int b) 
{
  while(a>0 && b>0)
  {
    if(a>b)
    a=a%b;
    else
    b=b%a;
  }
  if (a==0)
  {cout<<"GCD is : "<<b;} //--> since we're printing here so we will write void
     //-->if it were return b , then we would declare with int GCD
  else
    cout<<"GCD is : "<<a;

}
int main()
{
  int x,y;
  cout<<"the number is: ";
  cin>>x>>y;
  GCD(x,y);
  return 0;
}