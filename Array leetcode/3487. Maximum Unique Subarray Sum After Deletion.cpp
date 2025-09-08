class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>st;
        int sum =0;
        int maxNeg=INT_MIN;
        
        for(int &num : nums){
            if(num<=0){
                maxNeg=max(maxNeg,num);
            }
            else if(!st.count(num)){ //positive AND not seen before
                sum += num;
                st.insert(num);// usko set m daldo indicating ->its seen
            }
        }
        return sum==0 ? maxNeg : sum;
        
    }
};