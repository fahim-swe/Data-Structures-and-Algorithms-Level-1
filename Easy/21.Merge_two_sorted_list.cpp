#include <bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode *list3, *curr;

        // make head node 
        if(list1->val < list2->val){
            list3 = new ListNode(list1->val);
            list1 = list1->next;
        }
        else {
            list3 = new ListNode(list2->val);
            list2 = list2->next;
        }

        curr = list3;

        while( list1 != NULL && list2 != NULL)
        {
            if(list1->val < list2->val)
            {
                curr->next = new ListNode(list1->val);
                curr = curr->next;
                list1 = list1->next;
            }
            else {
                curr->next = new ListNode(list2->val);
                curr = curr->next;
                list2 = list2->next;
            }
        }


        while(list1 != NULL)
        {
            curr->next = new ListNode(list1->val);
            curr = curr->next;
            list1 = list1->next;
        }

        while(list2 != NULL)
        {
            curr->next = new ListNode(list2->val);
            curr = curr->next;
            list2 = list2->next;
        }

        return list3;
    }
};

void PrintNode(ListNode* l)
{
   
    cout << l->val << endl;
    while(l-> next != nullptr)
    {
        cout << l->next->val << endl;
        l->next = l->next->next;
    }
}

int main()
{
   
    int n;
    cin>>n;

    ListNode *list1, *list2, *cur;
   
    
    for(int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(i == 0){
            list1 = new ListNode(x);
            cur = list1;
        }
        else {
            cur->next = new ListNode(x);
            cur = cur->next;
        }
    }

    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(i == 0){
            list2 = new ListNode(x);
            cur = list2;
        }
        else {
            cur->next = new ListNode(x);
            cur = cur->next;
        }
    }


    // PrintNode(list1);
    // PrintNode(list2);

    

    Solution S;
    ListNode *sortedList = S.mergeTwoLists(list1, list2);
    PrintNode(sortedList);
   
}

