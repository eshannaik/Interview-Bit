// https://www.interviewbit.com/problems/merge-k-sorted-arrays

vector<int> Solution::solve(vector<vector<int> > &A) {
    map <int,int> res;
    vector <int> v;

    for(int i=0;i<A.size();i++)
    {
        // cout << i << endl;
        for(int j=0;j<A[i].size();j++)
        {
            // cout << A[i][j] << endl;
            if(res.find(A[i][j])==res.end())
                res[A[i][j]]=1;
            else
                res[A[i][j]]++;
        }
    }
    for(auto x:res)
    {
        for(int i=0;i<x.second;i++)
            v.push_back(x.first);
    }
    return v;
}
