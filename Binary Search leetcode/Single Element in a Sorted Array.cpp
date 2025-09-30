class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        
        if(n==1) return arr[0];
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[n-1]!=arr[n-2]) return arr[n-1];

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];
            }
            //standing on left side desired element is on right,so eliminate left half
            if(mid%2==1 && arr[mid]==arr[mid-1] || mid%2==0 && arr[mid]==arr[mid+1]) {
                    low=mid+1;
            }
            else{ //standing on right side,desired element is on left,so eliminate right half
                   high=mid-1;
            }
        
        }
     return -1;
     
    }
};