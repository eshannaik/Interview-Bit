// interviewbit.com/problems/k-largest-elements

vector<int> Solution::solve(vector<int> &A, int B) {
    vector<int> v;

    int n=A.size()-B;
    sort(A.begin(),A.end());
    for(int i=A.size()-1;i>=n;i--)
    {
        v.push_back(A[i]);
    }
    return v;
}
