#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)       // O(1)
        {
            sz++;
            Node* newnode = new Node(val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        void pop()           // O(1)
        {
            sz--;
            Node* deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top()        // O(1)
        {
            return tail->val;
        }
        int size()       // O(1)
        {
            return sz;
        }
        bool empty()      // O(1)
        {
            return head == NULL;
        }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}