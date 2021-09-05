// https://www.interviewbit.com/problems/pick-from-both-sides/

#include <numeric>

int Solution::solve(vector<int> &A, int B) {
    // int j=B-1;
    // cout << B << endl;
    // int i=0;
    int sum=0,max;
    int n=A.size();     

    // cout << i << j << B << endl;
    for(int i=0;i<B;i++)
    {
        sum += A[i];
    }
    max=sum;
    for(int i=1;i<=B;i++)
    {
        sum +=A[n-i]-A[B-i];
        if(sum>max)
            max=sum;
    }
    return (max);
}
