1283. Find the Smallest Divisor Given a Threshold

class Solution {
public:
     long long sumbyD(vector<int>& arr, int div) {
        int n = arr.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (arr[i] + div - 1) / div;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        int low = 1, high = *max_element(arr.begin(), arr.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumbyD(arr, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
