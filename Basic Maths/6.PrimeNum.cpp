// PrimeNumber--> a number which has exactly two divisors ; 1 and itself

//method 1==>this is the most optimal one-->tc=O(sqrt(n))
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter a number : ";
  cin >> n;
  int count = 0;
  for (int i = 1; i * i <= n; i++) // or ;i<=sqrt(n) samma chalcha
  {
    if (n % i == 0)
    {
      count++;
      if ((n / i) != i)
        count++;}
  } 
  if (count == 2)
   cout << "yes it is prime";
  else
   cout << "no it is not prime";
  return 0;
}

//-->method 2==> tc=O(n)-->brute force

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"enter a number : ";
//   cin>>n;
//   int count=0;

//   for(int i=1; i<=n; i++)
//   {
//   if(n%i==0)
//   {
//   count++;
//   }
//   }
//   if(count==2)
//    cout<<"yes its a prime number";
//   else
//   cout<<"its not";
//  return 0;
// }
