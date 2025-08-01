class Solution {
public:
    bool checker(vector<int>& arr, int i, vector<bool>& visited) {
        if (i < 0 || i >= arr.size())
            return false;
        if (arr[i] == 0)
            return true;
        if (visited[i])
            return false;

        visited[i] = true;
        bool x = checker(arr, i + arr[i], visited);
        bool y = checker(arr, i - arr[i], visited);
        return x || y;
    }

    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return checker(arr, start, visited);
    }
};
