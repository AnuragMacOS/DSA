#include<bits/stdc++.h>
using namespace std;
#include<vector>


void removeDuplicate(vector<int> &arr,int n)
{
  int i=0; 
  for(int j=0;j<n;j++)
  {
    if(arr[j]!=arr[i])
    {
      arr[i+1]=arr[j];
      i++;
    }

  }
  cout<<i+1; //-->no.of elements after removing duplicates
}


int main()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  removeDuplicate(arr,n);
  return 0;
}
