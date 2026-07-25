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
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == NULL || head->next == NULL)
//             return head;
//         int count=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         k = k % count;
//         if(k==0)
//             return head;
//         temp=head;
//         for(int i=1;i<(count-k);i++){
//             temp=temp->next;
//         }
//         ListNode* next=temp->next;
//         ListNode* temp1=temp->next;
//         while(temp1->next){
//             temp1=temp1->next;
//         }
//         temp1->next=head;
//         temp->next=NULL;
//         head=next;
//         return head;
//     }
// };


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        if(k%count==0) return head;
        k = k % count;
        if(k == 0)
            return head;
        temp->next=head;
        ListNode* newTail = head;
        for(int i = 1; i < count - k; i++)
            newTail = newTail->next;
        ListNode* temp1=newTail->next;
        //head=temp1;
        newTail->next=NULL;
        return temp1;
    }
};
