class Solution {
public:
  int countGoodStrings(int low, int high, int zero, int one)
{
    int count = 0, length = 0;
    vector<int> dp(high + 1, 0);

    const int M = 1e9 + 7;

    for (int length = high; length >= 0; length--)
    {
        int answer = 0;
        if (length >= low)
            answer += 1;

        if (length + zero <= high)
            answer += (dp[length + zero] % M);

        if (length + one <= high)
            answer += (dp[length + one] % M);

        dp[length] = (answer % M);
    }

    return (dp[0] % M);
}
};