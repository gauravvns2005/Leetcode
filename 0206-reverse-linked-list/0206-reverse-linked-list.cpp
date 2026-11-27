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


    // ListNode* Reverse(ListNode* curr, ListNode* prev)
    // {
    //     if(curr == NULL)
    //     {
    //         return prev;
    //     }

    //     ListNode* temp = curr->next;
    //     curr -> next = prev;
    //     return Reverse(temp, curr); 
    // }



    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head, *temp = NULL, *prev = NULL;

        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        head = prev;
        return  head;
    }
};