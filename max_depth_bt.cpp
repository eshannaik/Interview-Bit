// https://www.interviewbit.com/problems/max-depth-of-binary-tree

int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
        return 0;

    int l=maxDepth(A->left);
    int r=maxDepth(A->right);

    if(r>l)
        return r+1;
    return l+1;
}
