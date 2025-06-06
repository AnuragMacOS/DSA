 //Tc-->o(n) because eutai loop or iteration ma nikalna sakidai cha
 #include<iostream>
 using namespace std;
 #include<vector>

void Secondlargest(vector<int>&arr,int n)
{
  int largest=arr[0];
  int slargest=-1;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>largest)
    {
      slargest=largest;
      largest=arr[i];
      
    }
    else if(arr[i]<largest && arr[i]>slargest)
    {
      slargest=arr[i];
    }
  }
  cout<<"the second largest element is : "<<slargest;
 
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
  Secondlargest(arr,n);
  return 0;
}