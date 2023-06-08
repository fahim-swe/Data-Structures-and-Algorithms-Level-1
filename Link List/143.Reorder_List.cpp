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
    void reorderList(ListNode* head) {

        if(head == NULL) return;

        ListNode *ans, *currentNode;

        ans = new ListNode(head->val);
        currentNode = ans;

        ListNode *lastNode = head;
        while(lastNode->next != NULL) lastNode = lastNode->next;

        ListNode *t = new ListNode(lastNode->val);
        currentNode->next = t;
        currentNode = t;
        
        lastNode = NULL;

        head = head->next;

        while(head != NULL)
        {
            ListNode *lastNode = head;
            
            while(lastNode->next != NULL && lastNode->next->next != NULL) lastNode = lastNode->next;

            ListNode *temp = new ListNode(head->val);
            currentNode->next = temp;
            currentNode = temp;

           
            if(lastNode->next != NULL){
                ListNode *temp = new ListNode(lastNode->next->val);
                currentNode->next = temp;
                currentNode = temp;


                lastNode->next = NULL;
            }
            head = head->next;
        }

        
        head = ans;

        while(head != NULL){
            cout << head->val << " ";
            head = head->next;
        }
    }
};

void printAll(ListNode *node)
{
   
    while(node != NULL){
        cout << node->val << " ";
        node = node->next;
    }

    // ListNode* ans, *currentNode;

    // ans = new ListNode(node->val);
    // currentNode = ans;

    // node = node->next;


    // while(node != nullptr)
    // {
    //     ListNode* lastNode = node;
    //         while(lastNode != nullptr  && lastNode->next != nullptr && lastNode->next->next != nullptr){
    //             lastNode = lastNode->next;
    //         }


    //         ListNode *temp = new ListNode(node->val);
    //         currentNode->next = temp;
    //         currentNode = temp;
            
    //         if(lastNode->next != nullptr) {
    //             ListNode *temp = new ListNode(lastNode->next->val);
    //             currentNode->next = temp;
    //             currentNode = temp;
    //             lastNode->next = nullptr;
    //         }

    //     node = node->next;
    // }   

    // while(ans != NULL){
    //     cout << ans->val << " ";
    //     ans = ans->next;
    // }
}

int main()
{
    ListNode *root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    // root->next->next->next->next = new ListNode(5);

    
    Solution S;
    S.reorderList(root);

}