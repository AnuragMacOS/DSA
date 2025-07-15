class Solution {
public:
    vector<int> memo;

    int fun(int n) {
        if (n <= 1)  return n;
        if (memo[n] != -1)  return memo[n];

        int last = fun(n - 1);
        int Secondlast = fun(n - 2);
        memo[n] = last + Secondlast;

        return memo[n];
    }
    
    int fib(int n) {
        memo = vector<int>(n + 1, -1);
        return fun(n);
    }
};