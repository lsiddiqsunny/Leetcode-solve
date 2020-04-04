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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = 0;
        while(temp!=0 and temp->next!=0){
            ListNode* n1=temp;
            ListNode* n2=temp->next;
            if(prev==0){
                n1->next=n2->next;
                n2->next = n1;
                head=n2;
                prev=n1;
                temp=n1->next;
            }
            else{
                prev->next=n2;
                n1->next = n2->next;
                n2->next=n1;
                prev=n1;
                temp=n1->next;
            }
        }
        return head;
    }
};