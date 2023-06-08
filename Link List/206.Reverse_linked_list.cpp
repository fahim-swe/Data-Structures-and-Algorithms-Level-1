#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode(int x): val(x), next(nullptr){}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;

        ListNode *revHead;
        revHead = new ListNode(head->val);
        head = head->next;

        while(head != nullptr){
            ListNode *newNode = new ListNode(head->val);
            newNode->next = revHead;
            revHead = newNode;

            head = head->next;
        }

        printNode(revHead);
        return revHead;
    }

    void printNode(ListNode* head)
    {
        while(head != nullptr){
            cout << head->val << " $\n" ;
            head = head->next;
        }
    }
};

int main()
{
    ListNode* root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    root->next->next->next->next = new ListNode(5);


    Solution S;
  
    
    S.reverseList(root);
}