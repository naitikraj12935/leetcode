class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts) return 1.0;
        vector<double> dp(n + 1, 0.0);
        dp[0] = 1.0;
        double sum = 1.0, res = 0.0; 

        // dp[i] = probability of getting i points at some moment
        // dp[i] = (1/maxPts)( dp[i-1] + dp[i-2] + ... + dp[i-maxPts] )
        // sum = sliding window sum = dp[i-1] + dp[i-2] + ... + dp[i-maxPts]
        // res = ( dp[k] + dp[k+1] + ...  + dp[n-1] + dp[n])

        for (int i = 1; i <= n; i++) {
            dp[i] = sum / maxPts;
            if (i < k) sum += dp[i]; // add current
            else res += dp[i];
            if (i - maxPts >= 0)  sum -= dp[i - maxPts]; // remove 1st one
        }
        return res;
    }
};