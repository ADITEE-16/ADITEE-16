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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL && temp2!=NULL){
            temp1=temp1->next;
            temp2=temp2->next;
            temp1=headB;
            temp2=headA;
            while(temp1!=temp2){
                temp1=(temp1==NULL)?temp1=headB:temp1=temp1->next;
                temp2=(temp2==NULL)?temp2=headA:temp2=temp2->next;
            }
            return temp1;
        }
        return NULL;
    }
};
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
//         ListNode* temp=headA;
//         map<ListNode*,int> mpp;
//         while(temp!=NULL){
//             mpp[temp]=1;
//             temp=temp->next;
//         }
//         temp=headB;
//         while(temp!=NULL){
//             if(mpp.find(temp)!= mpp.end())
//                return temp;
//             temp=temp->next;
//         }
//         return NULL;
//     }
// };
   