/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        ListNode* prev=0;
        while(temp->next!=0){
            temp->val = temp->next->val;
            prev=temp;
            temp=temp->next;
        }
        prev->next=0;
    }
};