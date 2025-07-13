// Problem link: https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* newnode = new ListNode(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    
    void reverse(ListNode* &head, ListNode* tmp)
    {
        if(tmp->next == NULL)
        {
            head = tmp;
            return;
        }
        reverse(head,tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        ListNode* tmp = head;
        while(tmp != NULL)
        {
            insert_at_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }

        reverse(newhead,newhead);

        tmp = head;
        ListNode* tmp2 = newhead;
        
        while(tmp != NULL)
        {
            if(tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};









// Using vector

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        vector<int> v2;
        v2 = v;
        reverse(v2.begin(),v2.end());
        return v == v2;
    }
};