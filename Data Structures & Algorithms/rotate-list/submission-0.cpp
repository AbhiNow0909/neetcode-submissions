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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0)
        {
            return head;
        }

        ListNode *curr =head;
        int n = 1;

        while(curr->next)
        {
            curr=curr->next;
            n++;
        }

        k = k%n;
        if(k==0)
        {
            return head;
        }

        curr->next = head;

        curr = head;

        int steps = n-k;

        for(int i =1;i<steps;i++)
        {
            curr=curr->next;
        }

        ListNode* currHead = curr->next;
        curr->next = nullptr;
        head = currHead;

        return head;
    }
};