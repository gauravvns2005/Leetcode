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


    ListNode* Reverse(ListNode* curr, ListNode* prev)
    {
        if(curr == NULL)
        {
            return prev;
        }

        ListNode* temp = curr->next;
        curr -> next = prev;
        return Reverse(temp, curr); 
    }



    ListNode* reverseList(ListNode* head) {

        // ===== brute force approach using extra space ====

        // vector<int> ans;

        // ListNode* temp = head;

        // while(temp != NULL)
        // {
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int i = ans.size()-1;
        // temp = head;
        // while(temp )
        // {
        //     temp->val = ans[i];
        //     i--;
        //     temp = temp->next;
        // }

        // return head;



        // === other method : sing an in-place pointer reversal approach where I reverse the links between nodes, achieving O(1) space.===
        // ListNode* curr = head, *prev = NULL, *temp = NULL;

        // while(curr != NULL)
        // {
        //     temp = curr -> next;
        //     curr -> next = prev;
        //     prev = curr;
        //     curr = temp; 
        // }

        // head = prev;
        // return head;








        // ==== recursive apporach =====

        return Reverse(head, NULL);
    }
};