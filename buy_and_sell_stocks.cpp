// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-i

int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0)
        return 0;
    if(A.size()==1)
        return 0;
    int n=A.size();
    int mini=A[0];
    int price=INT_MIN;

    // cout << n << endl;
    for(int i=1;i<n;i++)
    {
        // cout << "HELLO" << endl;
        mini = min(mini,A[i]); 
        price = max(price,A[i]-mini);
    }
    return price;
}
