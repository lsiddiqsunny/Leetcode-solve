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
    ListNode* rotateRight(ListNode* head, int k) {
  if(head==NULL)
    {
        return NULL;
    }
    
    int len=0;
    ListNode* temp=head;
    
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    
    k=k%len;
    
    if(k==0)
    {
        return head;
    }
    
    temp=head;
    
    for(int i=0;i<len-k-1;i++)
    {
        temp=temp->next;
    }
    
    ListNode* newhead=temp->next;
    temp->next=NULL;
    
    temp=newhead;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    
    temp->next=head;
    
    return newhead;
    }
};