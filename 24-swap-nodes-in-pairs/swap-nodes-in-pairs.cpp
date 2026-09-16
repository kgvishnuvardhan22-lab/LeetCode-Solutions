class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* temp = new ListNode(-1);
        temp->next = head;

        ListNode* curr = temp;

        while(curr->next != NULL && curr->next->next != NULL)
        {
            ListNode* first = curr->next;
            ListNode* second = first->next;

            first->next = second->next;
            second->next = first;
            curr->next = second;

            curr = first;
        }

        return temp->next;
    }
};