#include<iostream>
using namespace std;
#include<vector>


void MoveZeroestoEnd(vector<int> &arr,int n)
{
vector<int> temp; 
for(int i=0;i<n;i++)
  {
  if( arr[i]!=0)
    temp.push_back(arr[i]); 
  }

for(int i=0;i<temp.size();i++)
{
 arr[i]=temp[i];
 
}
int nz=temp.size();
for(int i=nz;i<n;i++)
 { 
  arr[i]=0;
 }
 cout << "The elements after moving zeroes to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    // cout << "Enter the number of elements: ";
    cin >> n;

  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  MoveZeroestoEnd(arr,n);

  //  cout << "Array after moving zeros: ";
  //   for(int i = 0; i < n; i++) {
  //       cout << arr[i] << " ";
  //   }
  //     return 0;
}

