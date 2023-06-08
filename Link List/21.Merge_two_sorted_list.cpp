#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;

    ListNode(int x): val(x), next(nullptr){}
};

class Solution {
public:


    void printAllElementOfLinkList(ListNode* head)
    {
        while(head != NULL){
            cout << head->val << " ";
            head = head->next;
        }
    }

    void copyElementFromNodeAToNodeB(ListNode* aNode, ListNode* bNode)
    {
        while(aNode != NULL){
            ListNode *t = new ListNode(aNode->val);
            bNode->next = t;
            bNode = t;
            aNode = aNode->next;
        }
    }



    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode *list3, *currentNode, *t;

        // make head node
        if(list1->val < list2->val) 
            list3 = new ListNode(list1->val), list1 = list1->next;
        else 
            list3 = new ListNode(list2->val), list2 = list2->next;
        
        currentNode = list3;


        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val) {
                t = new ListNode(list1->val);
                currentNode->next = t;
                currentNode = t;
                list1 = list1->next;        
            }
            else{
                t = new ListNode(list2->val);
                currentNode->next = t;
                currentNode = t;
                list2 = list2->next;
            }
        }

        copyElementFromNodeAToNodeB(list1, currentNode);
        copyElementFromNodeAToNodeB(list2, currentNode);

        return list3;
    }
};

int main()
{
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);


    Solution S;
    ListNode* list3 = S.mergeTwoLists(list1, list2);

    S.printAllElementOfLinkList(list3);

}