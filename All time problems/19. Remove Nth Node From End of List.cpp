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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* temp = head;
        while(temp!=0){
            sz++;
            temp=temp->next;
        }
        int now = sz-n+1;
        if(now<=0){
            return head;
        }
        if(now==1){
            head=head->next;
            return head;
        }
        temp=head;
        ListNode* prev=0;
        sz=0;
        while(sz<=now){
            sz++;
            if(sz==now){
                prev->next=temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};