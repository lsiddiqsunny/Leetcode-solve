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
    ListNode* reverse(ListNode* prev, ListNode* next){
    ListNode* last = prev->next;
    ListNode* curr = last->next;
 
    while(curr != next){
        last->next = curr->next;
        curr->next = prev->next;
        prev->next = curr;
        curr = last->next;
    }
 
    return last; 
}
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==0||k==1)
        return head;
 
    ListNode* fake = new ListNode;
    fake->next = head;
    ListNode* prev = fake;
    int i=0;
 
    ListNode* p = head;
    while(p!=0){
        i++;
        if(i%k==0){
            prev = reverse(prev, p->next);
            p = prev->next;
        }else{
            p = p->next; 
        }
    }
 
    return fake->next; 
    }
};