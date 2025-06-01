#include<iostream>
using namespace std;


int main()
{
  int n;
  cout<<"Enter a number :";
  cin>>n;
  int dup=n;;
  int sum=0;
  while(n>0)
  {
   int ld=n%10;
   sum=sum+(ld*ld*ld);
   n=n/10;

  }
  if(dup==sum)
  cout<<" its an armstrong number ";
  else
   cout<<"its not an armstrong number";
  return 0;
}