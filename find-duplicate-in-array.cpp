// https://www.interviewbit.com/problems/find-duplicate-in-array

int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v(A.size(),0);
    for(auto x:A)
    {
        v[x]++;
        if(v[x]==2)
            return x;
    }
    return -1;
}
