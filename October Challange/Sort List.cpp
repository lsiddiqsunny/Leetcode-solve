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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;
        while(temp!=0){
            v.push_back(temp->val);
            temp= temp->next;
        }
        sort(v.begin(),v.end());
        
        temp = head;
        int i=0;
        while(temp!=0){
            temp->val = v[i++];
            temp= temp->next;
        }
        return head;
    }
};