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
    ListNode* middleNode(ListNode* head) {
        int sz=0;
        ListNode* temp=head;
        while(temp!=0){
            sz++;
            temp=temp->next;
            
        }
        if(sz%2==1){
            sz/=2;
        }
        else{
            sz/=2;
           
        }
        temp=head;
        int now=0;
        while(temp!=0){
            if(now==sz){
                return temp;
            }
            now++;
            
            temp=temp->next;
            
        }
        return 0;
    }
};