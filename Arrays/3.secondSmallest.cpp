#include<iostream>
using namespace std;
#include<vector>
#include<climits>

void SecondSmallest(vector<int> &arr,int n)
{
  int smallest=arr[0];
  int ssmallest=INT_MAX;
  for(int i=1;i<n;i++)
  {
    if(arr[i]<smallest){
    ssmallest= smallest;
    smallest=arr[i];
  }
  else if(arr[i]!=smallest && arr[i]<ssmallest )
  {
    ssmallest=arr[i];
  }
  }
  cout<<"the second smallest element is :"<<ssmallest;
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
  SecondSmallest(arr,n);
  return 0;
}
