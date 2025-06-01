//recursive method

#include<iostream>
using namespace std;

int ReverseNum(int n)
{
  int reverse=0;
  while(n>0)
  {
    int lastdigit=n%10;
    n=n/10;
    reverse=(reverse*10) + lastdigit;
  }
  return reverse;
}
int main()
{
  int num;
  cout<<"enter a number : ";
  cin>>num;
 
  cout<<"the reversed digit is :"<<ReverseNum(num)<<endl;
  return 0;
}

//  #include<iostream>
// using namespace std;


// int main()
// {
// int n;
// cin>>n;
// int revNum=0;
// while(n>0)
// {
// int lastdigit=n%10;
// revNum=(revNum*10)+lastdigit;
// n=n/10;
// }
// cout<<revNum;
// }
