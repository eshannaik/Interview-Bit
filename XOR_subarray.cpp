// https://www.interviewbit.com/problems/xor-ing-the-subarrays

int Solution::solve(vector<int> &A) {
    int res=0;
    for(int i=0; i<A.size(); i++)
    {
        long int freq = (i+1)*(A.size()-i); 
        if(freq%2==1)
            res=res^A[i];
    }
    return res;
}
