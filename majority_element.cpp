// https://www.interviewbit.com/problems/majority-element/

int Solution::majorityElement(const vector<int> &A) {
    map <int,int> res;
    int n=A.size();
    int a;
    for(auto x:A)
    {
        if(res.find(x)==res.end())
            res[x]=1;
        else
            res[x]++;
    }
    for(auto x:res)
    {
        if(x.second>floor(n/2))
        {
            a = x.first;
            break;
        }
    }
    return a;
}
