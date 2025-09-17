class Solution {
public:
//Array A of size "N-1" and element of range "1 to N"
    int missingNumber(vector<int>& nums) //n elements present
    {
        int xor1=0;
        int xor2=0;
        int n=nums.size(); 
        for(int i=0;i<n;i++) //but currently we're running from 0 to 2(as in the array there are 3 element)
        {
            xor2=xor2^nums[i];
            xor1=xor1^(i+1);
        }
        xor1 = xor1 ^ 0;
        return xor1^ xor2;
    }
};