/*
*****
*   *
*   *
*   *
*****
*/
//it only has stars in the boundary
#include<iostream>
using namespace std;

void print21 (int n)
{
  for(int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
      if(i==0 || i==n-1||j==0||j==n-1)
      {
        cout <<"*";
       }
       else
       {
        cout<< " ";
       }
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
    print21(n);
  }
}