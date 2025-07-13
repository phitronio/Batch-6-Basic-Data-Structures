// Problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* tmp = head;
        while(tmp->next != NULL)
        {
            if(tmp->val == tmp->next->val)
                tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        }
        return head;
    }
};