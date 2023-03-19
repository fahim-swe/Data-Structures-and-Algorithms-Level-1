#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL) return head;
        ListNode *revHead;
        revHead = new ListNode(head->val);
        head = head->next;

        while(head != NULL)
        {
            ListNode* newNode = new ListNode(head->val);
            newNode->next = revHead;
            revHead = newNode;

            head = head->next;
        }

        

        // print(revHead);

        return revHead;
    }

    void print(ListNode* head)
    {
        while(head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
    }
};

int main()
{
  
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution S;
    S.reverseList(head);

}