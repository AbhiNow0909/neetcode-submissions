class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;

        

        int len = 0;

        while(curr)
        {
            len++;
            curr = curr->next;
        }

        // Remove head
        if(len == n)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int des = len - n;
        int i = 1;

        curr = head;

        // Stop at node before the one to delete
        while(i < des)
        {
            curr = curr->next;
            i++;
        }

        ListNode* temp = curr->next;
        curr->next = curr->next->next;

        delete temp;

        return head;
    }
};