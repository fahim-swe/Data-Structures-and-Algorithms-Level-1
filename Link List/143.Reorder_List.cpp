#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:

    void printNode(ListNode *head)
    {
        while(head != NULL){
            cout << head->val << " ";
            head = head->next;
        }

        cout << endl;
    }

    ListNode* reverseList(ListNode* head)
    {

        if(head == NULL) return head;

        ListNode *revHead = new ListNode(head->val);
        head = head->next;

        while(head != NULL){
            ListNode *newNode = new ListNode(head->val);
            newNode->next = revHead;
            revHead = newNode;

            head = head->next;
        }
        return revHead;
    }


    void reorderList(ListNode* head) {
       
       if(head == NULL) return ;

       ListNode *slow = head;
       ListNode *fast = head->next;

       while( fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
       }


        ListNode *first = head;
        ListNode *second = reverseList(slow->next);
        slow->next = NULL;

        ListNode *temp1, *temp2;

        while(second != NULL){
            temp1 = first->next;
            first->next = second;
            temp2 = second->next;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};

void printAll(ListNode *node)
{
   
    while(node != NULL){
        cout << node->val << " ";
        node = node->next;
    }
}

int main()
{
    ListNode *root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    root->next->next->next->next = new ListNode(5);
    root->next->next->next->next->next = new ListNode(6);

    
    Solution S;
    S.reorderList(root);

}