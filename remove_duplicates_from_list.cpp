// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list

ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* t1 = A;

    if(A == NULL)
        return A;

    while (t1->next != NULL)
    {
        if (t1->val == t1->next->val)      
            t1->next = t1->next->next;
        else
            t1 = t1->next;
    }
    return A;
}
