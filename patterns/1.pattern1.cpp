/*

*****
*****
*****
*****
i is row
j is column
*/
#include<iostream>
using namespace std;

void print1(int n)
{ 
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

}
//n is no.of lines
int main()
{
  int t;
  cout<<"no of test cases:"<<endl;//since we need multiple test cases to validate for each option.
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cout<<"no.of lines:"<<endl;
    cin>>n;
    print1(n);
  }
}