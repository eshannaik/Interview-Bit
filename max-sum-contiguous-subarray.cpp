// https://www.interviewbit.com/problems/max-sum-contiguous-subarray

int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size();
    // vector <int> dp(n+1,0);
    int dp=A[0];
    int sum=A[0];
    for(int i=1;i<n;i++)
    {
        dp = max(A[i],A[i]+dp);
        // cout << A[i] << dp[i] << endl;
        sum = max(sum,dp);
        // cout << sum << endl;
    }
    return sum;
}
