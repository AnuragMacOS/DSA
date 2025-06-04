/*
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
*/

//  (2*i +1)-> 9 chars
#include<iostream>
using namespace std;

void print17(int n)
{

//for rows
  for(int i=0;i<n;i++)
  {
    //for space
    for(int j=0;j < 5-i-1;j++)
    {
      cout<< " ";
    }
    //for characters
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for(int j=1;j<=2*i+1;j++)
    {
    cout<<ch;
    if(j<=breakpoint) ch++;
    else ch--;
    }
    //for space
    for(int j=0;j< 5-i-1;j++)
    {
      cout<<" ";
    }

    cout<<endl;
  }
}

int main()
{
  int t;
  cout<<"no.of test cases:";
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cout<<"no.of lines:";
    cin>>n;
    print17(n);
  }

}

