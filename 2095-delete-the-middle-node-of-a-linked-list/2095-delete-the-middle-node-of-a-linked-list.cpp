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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL)
//             return NULL;
//         if(head->next == NULL){
//             return NULL;
//         }
//         ListNode* temp=head;
//         int count=0;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         temp=head;
//         for(int i=1;i<(count/2);i++){
//             temp=temp->next;
//         }
//         ListNode* deletenode=temp->next;
//         temp->next=deletenode->next;
//         return head;
//     }
// };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev = NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
