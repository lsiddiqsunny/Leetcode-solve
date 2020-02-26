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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* root=0;
        ListNode* rem=root;
        while(l1 and l2){
            ListNode* temp;
            int x=l1->val+l2->val+carry;
            if(x>=10){
                temp=new ListNode(x%10);
                carry=1;
            }
            else{
               temp=new ListNode(x%10);
               carry=0;
            }
            
            if(root==0){
                root=temp;
                rem=root;
                
            }else{
                root->next=temp;
                root=temp;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==0){
            while(l2){
            ListNode* temp;
            int x=l2->val+carry;
            if(x>=10){
                temp=new ListNode(x%10);
                carry=1;
            }
            else{
               temp=new ListNode(x%10);
               carry=0;
            }
            
            if(root==0){
                root=temp;
                rem=root;
                
            }else{
                root->next=temp;
                root=temp;
            }
            l2=l2->next;
        }
        }else{
             while(l1){
            ListNode* temp;
            int x=l1->val+carry;
            if(x>=10){
                temp=new ListNode(x%10);
                carry=1;
            }
            else{
               temp=new ListNode(x%10);
               carry=0;
            }
            
            if(root==0){
                root=temp;
                rem=root;
                
            }else{
                root->next=temp;
                root=temp;
            }
            l1=l1->next;
        }
        }
        
        if(carry){
            ListNode* temp=new ListNode(1);
            if(root==0){
                root=temp;
                rem=root;
                
            }else{
                root->next=temp;
                root=temp;
            }
        }
        
        return rem;
    }
};