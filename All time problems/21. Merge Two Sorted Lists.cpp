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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* l3=0;
        ListNode* root=0;
        
        while(l1!=0 and l2!=0){
            
            ListNode* temp = new ListNode;
            
            if(l1->val<l2->val){
                //cout<<"here1"<<endl;
                temp->val=l1->val;
                l1=l1->next;
            }
            else{
                //cout<<"here2"<<endl;
                temp->val=l2->val;
                l2=l2->next;
            }
            temp->next=0;
            
            if(root==0){
                l3=temp;
                root=l3;
                continue;
            }
            l3->next=temp;
            l3=l3->next;
        }
        
        while(l1!=0){
            ListNode* temp = new ListNode;
            temp->val=l1->val;
            temp->next=0;
            l1=l1->next;
            if(root==0){
                l3=temp;
                root=l3;
                continue;
            }
            
            l3->next=temp;
            l3=l3->next;
        }
        while(l2!=0){
            ListNode* temp = new ListNode;
            temp->val=l2->val;
            temp->next=0;
            l2=l2->next;
            if(root==0){
                l3=temp;
                root=l3;
                continue;
            }
            l3->next=temp;
            l3=l3->next;
        }
        
        return root;
    }
};