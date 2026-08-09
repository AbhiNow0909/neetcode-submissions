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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;
        ListNode* curr =head;

        while(curr)
        {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        sort(arr.begin(),arr.end());
        curr = head;

        for(int ele : arr)
        {
            curr->val = ele;
            curr=curr->next;
        }

        return head;
    }
};