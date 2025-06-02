#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //pre compute
 unordered_map<int,int> mpp;
  for(int i=0;i<n;i++)
  {
   mpp[arr[i]]++;
  }
  //map stores values in sorted order
  //iterate in the map
  for(auto it:mpp)
  {
    cout<<it.first<<"->"<<it.second <<endl;
  }
  int q;//queries
  cin>>q;
  while(q--)
  {
    int number;
    cin>>number;
    //fetch
    cout<<mpp[number]<<endl;}
  return 0;
}