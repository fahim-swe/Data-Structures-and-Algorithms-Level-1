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
        return list1;
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
   
    // ListNode* l1 = new ListNode(10, nullptr);
    // ListNode* l2 = new ListNode(20, nullptr);
    // l1->next = l2;
    // ListNode* l3 = new ListNode(30, nullptr);
    // l2->next = l3;

    // ListNode* l4 = new ListNode(40, nullptr);
    // l3-> next = l4;

    // ListNode* list1 = l4;

    // PrintNode(l1);
   

    int n;
    cin>>n;

    // Input first List
    ListNode *list1;

    for(int i = 0; i <n; i++)
    {   
        int x; cin>>x;
        list1-> next = new ListNode(x, nullptr);
    }

    PrintNode(list1);
}



