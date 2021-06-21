int Solution::solve(vector<int> &A) {
    int max=0,min=1000000,sum=0;
    for (int i=0;i<A.size();i++)
    {
        if(A[i]>A[i+1])
        {
            if(max<A[i])
            max=A[i];
        }      
        else if(A[i]<A[i+1])
        {
            if(min>A[i])
            min=A[i];
        }  
    }
    sum = max + min;
    return sum;
}
