/* space_stars_space
so there will be 3 diff inner loops
for(space)
for(stars)
for(space)
    *
   ***        
  *****
 *******
*********.  (2*i +1)-> 9 stars
*/
#include<iostream>
using namespace std;

void print7(int n)
{

//for rows
  for(int i=0;i<n;i++)
  {
    //for space
    for(int j=0;j < 5-i-1;j++)
    {
      cout<< " ";
    }
    //for stars
    for(int j=0;j< 2*i+1;j++)
    {
      cout<<"*";
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
    print7(n);
  }

}

