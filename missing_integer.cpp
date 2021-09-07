// https://www.interviewbit.com/problems/first-missing-integer

int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    if(n==1 && A[0]==1)
        return 2;
    vector<int> v(n+1,0);
    for(int i=0;i<n;i++)
    {
        if(A[i]>0 && A[i]<n+1)
            v[A[i]]++;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(v[i]==0)
            return i;
    }
    return 0;
}
