 // https://www.interviewbit.com/problems/total-moves-for-bishop

int Solution::solve(int A, int B) {
    // return min(8-A,8-B)+min(8-A,B-1)+min(8-B,A-1)+min(A-1,B-1);

    if(A==1 || B==1 || A==8 || B==8)
        return 7;
    else if(A==2 || B==2 || A==7 || B==7)
        return 9;
    else if(A==3 || B==3 || A==6 || B==6)
        return 11;
    else
        return 13;
}
