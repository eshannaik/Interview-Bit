// https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string A) {
    int i=0;
    string w="";
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    for(auto x:A){
        if(int(x)>=97 && int(x)<=122)
        {
            w +=x;
        }
        if(int(x)>=48 && int(x)<=57)
        {
            w +=x;
        }
    }
    int j=w.length()-1;
    if(w.size()==0)
        return 1;
    while(i!=j && i<=w.size()-1 && j>=0)
    {
        if(w[i]!=w[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
