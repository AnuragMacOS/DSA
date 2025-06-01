// 36 ko divisor--> 1 2 3 4 6 9 12 18 36 
// so we have to print all of it




// 1st method -->recursive method-->not most optimal

#include<iostream>
using namespace std;

void PrintDivs(int n)
{
  for (int i = 0; i<=n ; i++)
  {
    if (n%i==0)
    cout <<i<< " ";
  }
}

int main()
{
  int num;
  cout<<"the number is: ";
  cin>>num;
  PrintDivs(num);
  return 0;
}

// 3rd method-->Most optimal

// #include<iostream>
// using namespace std;
// int PrintDivs(int n)
// {
//   for (int i=1; i<=sqrt(n) ; i++)
//   {
//     if (n%i==0)
//     {
//     cout <<i<< " ";
//     }
//     if((n/i)!=i)
//     {
//       cout<<(n/i)<<" ";
//     }
//   }
// }


// int main()
// {
//   int num;
//   cout<<"the number is: ";
//   cin>>num;
//   PrintDivs(num);
//   return 0;
// }






// 2nd method-->not most optimal one
// #include<iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout<<"Enter a number : ";
//   cin>>n;
  
//   for(int i=0; i<=n; i++)
//   {
//     if(n%i==0)
//     cout<<"the divisors are :"<<i<<endl;
//   }
//   return 0;
// }

