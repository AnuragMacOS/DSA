class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int leftsum = 0, rightsum = 0, maxsum = 0;
        int n = cardPoints.size();

        for (int i = 0; i < k; i++)
        {
            leftsum += cardPoints[i];
            maxsum = leftsum;
        }

        int rindex = n - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            leftsum -= cardPoints[i];
            rightsum += cardPoints[rindex];
            rindex--;
            maxsum = max(maxsum, (leftsum + rightsum));
        }
        return maxsum;
    }
};