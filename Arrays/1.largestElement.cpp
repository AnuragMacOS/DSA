 #include<iostream>
 using namespace std;
 #include<vector>

void largestElement(vector<int>& arr,int n){
 int largest=arr[0];
 for(int i=0;i<n;i++)
 {
  if(arr[i]>largest)
  {
    largest=arr[i];
  }
 } 
 cout<<"The largest element is :"<<largest<<endl; //return largest--> if doing on leetcode
 }
  int main()
{
  int n;
  cin>>n;
  vector<int> arr(n); // Create a vector of size n
  for (int i = 0; i < n; i++) {
   cin >> arr[i]; // Input elements into the vector
    }
  largestElement(arr,n);
  return 0;
}
