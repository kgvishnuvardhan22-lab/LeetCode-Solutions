/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return nullptr;
        ListNode *temp=head;
        ListNode *temp1=temp;
        ListNode *temp2=temp;
        for(int i=0;i<n;i++){
            temp1=temp1->next;
            if(temp1==nullptr) return head->next;
        }
        while(temp1->next !=nullptr){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return temp;
    }

};