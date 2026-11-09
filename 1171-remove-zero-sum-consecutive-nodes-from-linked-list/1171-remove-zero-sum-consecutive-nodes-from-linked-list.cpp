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
    ListNode* removeZeroSumSublists(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (prev) {

            int sum = 0;
            ListNode* curr = prev->next;

            while (curr) {

                sum += curr->val;

                if (sum == 0) {
                    prev->next = curr->next;
                    break;
                }

                curr = curr->next;
            }

            if (curr == nullptr) {
                prev = prev->next;
            }
        }

        return dummy->next;
    }
};