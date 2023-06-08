#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next){}
};


class Solution {
public:

    int numOfNode(ListNode* head)
    {
        ListNode* t = head;
        int c = 0;
        while(t != nullptr){
            t = t->next;
            c++;
        }

        return c;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* t = head;

        int total = numOfNode(head);

        
        int time = total - n;
        time--;

        while(time--){
            t = t->next;
        }

        if(t == head) head = nullptr;

        t->next = t->next->next;


        return head;
    }
};

int main()
{
    ListNode* root = new ListNode(1);
    // root->next = new ListNode(2);
    // root->next->next = new ListNode(3);
    // root->next->next->next = new ListNode(4);
    // root->next->next->next->next = new ListNode(5);

    Solution S;
    
    root = S.removeNthFromEnd(root, 1);
}