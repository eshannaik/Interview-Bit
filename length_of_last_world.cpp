// https://www.interviewbit.com/problems/length-of-last-word

int Solution::lengthOfLastWord(const string A) {
    int c=0;
    int temp=A.length()-1;
    if(A.length()==1 && A[0]!=' ')
        return 1;
    if(A.length()==1 && A[0]==' ')
        return 0;
    for(int i=A.length()-1;i>=0;i--)
    {
        // cout << temp << endl;
        if(A[i]==' ')
        {
            temp=i-1;
        }
        else
            break;
    }
    // cout << temp << endl;
    for(int i=temp;i>=0;i--)
    {
        // cout << temp << A[i] << endl;
        if(A[i]==' ' || i<0)
            break;
        c++;
    }
    return c;
}
