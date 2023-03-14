

#include <bits/stdc++.h>
using namespace std;


 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:

    
    bool hasCycle(ListNode *head) {
        // map<ListNode*, bool> mp;

        // while(head != NULL)
        // {
        //     if(mp.find(head) != mp.end()) return true;
        //     mp[head] = true; 
        //     head = head->next;
        // }        


        while(head != NULL)
        {
            if(head->val == -1) return true;

            head->val = -1;
            head = head->next;
            
        }

        return false;
    }


   
};



int main()
{
    ListNode *curr, *root = new ListNode(3);
    root->next = new ListNode(2);
    curr = root->next ;
    root->next->next = new ListNode(0);
    root->next->next->next = new ListNode(-4);
    root->next->next->next->next = curr;

    Solution S;
    cout << S.hasCycle(root) << endl;

}