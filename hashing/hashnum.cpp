// we can only hash number upto 10^7 using arrays bigger than that we cant


#include<iostream>
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
 //precompute 
int hash[13]={0};
for(int i=0;i<n;i++)
{
hash[arr[i]]+=1;
}
 int q;
 cin>>q;
 while(q--)
 {  int number;
    cin>>number;
    //fetch
    cout<<hash[number]<<endl;}
  return 0;
}