class Solution {
public:
    int firstOccurence(vector<int>&arr,int x)
    {
        int n=arr.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<x) low=mid+1;
            else high=mid-1;
        }
        return first;
    }

     int lastOccurence(vector<int>&arr,int x)
    {
        int n=arr.size();
        int low=0,high=n-1,last=-1;
        while(low<=high){
            int mid=(low+high) /2;
            if(arr[mid]==x){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]>x) high=mid-1;
            else low=mid+1;
        }
        return last;
    }
     vector<int> searchRange(vector<int>& arr, int x) {
        int first = firstOccurence(arr, x);
        if(first == -1)  return {-1 , -1};
        int last=lastOccurence(arr, x);
        return{first,last};
    }
};