class Solution {
public:
    int countPrimes(int n) {
        vector<int> list;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                list.push_back(i);
            }
            while (n % i == 0) {
                n = n / i;
            }
        }
        if (n > 1) list.push_back(n);
        return list.size();
    }
};