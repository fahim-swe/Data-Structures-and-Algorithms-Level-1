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

    int numOfNodes(ListNode* head)
    {
        int c= 0;
        while(head != NULL){
            c++;
            head = head->next;
        }

        return c;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int lenght = numOfNodes(head);

        if(lenght == 1 || lenght == n) return head->next;

        ListNode* currNode = head;

        for(int i = 0; i < lenght-n-1; i++){
            currNode = currNode->next;
        }

        currNode->next = currNode->next->next;

        return head;
    }
};

void printNodes(ListNode* head)
{
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode* root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    root->next->next->next->next = new ListNode(5);

    Solution S;
    
    root = S.removeNthFromEnd(root, 2);
    printNodes(root);
}