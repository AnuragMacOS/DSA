
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // we choose the first element as the pivot
    int i = low;
    int j = high;

    while (i < j) { 
        while (arr[i] <= pivot && i < high) {   // element greater than pivot
        i++;}
        while (arr[j]> pivot && j>low) {     //element smaller than pivot
            j--;}
        if (i < j) {     //swap elements
            swap(arr[i], arr[j]); }
    }
    swap(arr[low], arr[j]);   //if j>i basically if it crosses i while coming back
    return j; // Return the pivot index
}
void qS(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high); // Partition in 2 half
        qS(arr, low, pIndex - 1);              // we will Sort the left subarray
        qS(arr, pIndex + 1, high);             //we will Sort the right subarray
    }
}
vector<int> quickSort(vector<int> arr) {
    qS(arr, 0, arr.size() - 1); // we Call the recursive Quick Sort function
    return arr;
}
int main() {
    int n;
    cin >> n; //this is input size of array
    vector<int> arr(n); // we Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; }
    arr = quickSort(arr); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";} // get sorted array
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int low,int high)
{
   int pivot=arr[low];
   int i=low;
   int j=high;
   while(i<j)
   {
    while(arr[i]<=pivot && i<=high -1)
    {
      i++;
    }
    while (arr[j]> pivot&& j>low+1)
    {
      j--;
    }
    if(i<j)
    {
      swap(arr[i],arr[j]);
    }
    else
       swap(arr[j],arr[low]);
    
   }
      return j;
  
}



void qS(vector<int> &arr,int low,int high)
{
  if(low<high)
  {
   int pIndex=partition(arr,low,high);
   qS(arr,low,pIndex-1);
   qS(arr,pIndex+1,high);

  }
}

vector<int> quickSort(vector<int> arr)
{
 qS(arr,0,arr.size()-1);
 return arr;

}
int main() {
    int n;
    cin >> n; // Input size of array
    
    vector<int> arr(n); // Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the vector
    }
    
    quickSort(arr); // Call mergeSort with vector and its size
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output sorted array
    }
    
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j) {
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qS(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    arr = quickSort(arr);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

*/