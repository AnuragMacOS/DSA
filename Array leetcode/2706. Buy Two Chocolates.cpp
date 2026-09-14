class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int MinPrice = INT_MAX;
        int SecMinPrice = INT_MAX;

        for (int price : prices) {
            if (price < MinPrice) {
                SecMinPrice = MinPrice;
                MinPrice = price;
            } 
            else {
                SecMinPrice = min(SecMinPrice, price);
            }
        }
        if (MinPrice + SecMinPrice > money) {
            return money; // matlab we cant buy
        }
        return money - (MinPrice + SecMinPrice);
    }
};