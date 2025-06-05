#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1; // Start right after mid
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)  // Copy remaining elements from the left half
        {temp.push_back(arr[left]);
        left++;}
    
    while (right <= high)  // Copy remaining elements from the right half
        {temp.push_back(arr[right]);
        right++;}
   
    for (int i = low; i <= high; i++)//Copy the sorted elements back to the original array
        arr[i] = temp[i - low];
}
void ms(vector<int>& arr, int low, int high) {
    if (low >= high) return; // Base case
    int mid = (low + high) / 2;
    
    ms(arr, low, mid); // Sort left half
    ms(arr, mid + 1, high); // Sort right half
    merge(arr, low, mid, high); // Merge both halves
}
void mergeSort(vector<int> & arr, int n) { // Accepts vector and its size
    ms(arr, 0, n - 1); // Call ms with full range of indices
}

int main() {
    int n;
    cin >> n; // Input size of array
    
    vector<int> arr(n); // Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the vector
    }
    
    mergeSort(arr, n); // Call mergeSort with vector and its size
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output sorted array
    }
    
    return 0;
}
