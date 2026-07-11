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
        if(head==NULL)
            return NULL;
        if(head->next == NULL && n == 1)
            return NULL;
        ListNode* dummynode = new ListNode(0);
        dummynode->next = head;
        ListNode* slow=dummynode;
        ListNode* fast=dummynode;
        for(int i=1;i<=n+1;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;
        return dummynode->next;
        
    }
};