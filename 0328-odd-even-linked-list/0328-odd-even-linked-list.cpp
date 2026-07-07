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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        ListNode* dummynode=new ListNode(-1);
        ListNode* curr=dummynode;
        if(head == NULL) return head;
        while(temp != NULL){
            curr->next = new ListNode(temp->val);
            curr = curr->next;
            if(temp->next)
                temp = temp->next->next;
            else
                temp = NULL;
        }
        temp=head->next;
        while(temp != NULL){
            curr->next = new ListNode(temp->val);
            curr = curr->next;
            if(temp->next)
                temp = temp->next->next;
            else
                temp = NULL;
        }
        return dummynode->next;
    }
};