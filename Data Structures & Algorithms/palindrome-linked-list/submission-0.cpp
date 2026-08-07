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
    bool isPalindrome(ListNode* head) {
        ListNode * slow =head, *fast = head;

        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow= slow->next;
        }

        ListNode* prev = nullptr;

        while(slow)
        {
            ListNode* temp = slow->next;
            slow->next = prev;
            prev=slow;
            slow = temp;
        }

        ListNode* left = head, *right = prev;
        while(right && left)
        {
            if(left->val != right->val)
            {
                return false;
            }
            left = left->next;
            right = right->next;
        }

        return true;
    }
};