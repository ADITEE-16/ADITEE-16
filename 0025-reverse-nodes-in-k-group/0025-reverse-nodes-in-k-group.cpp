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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* getKNode(ListNode* temp,int k){
        //k-=1;
        while(temp!=NULL && k>1){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        while(temp!=NULL){
            ListNode* KNode=getKNode(temp,k);
            if(KNode == NULL){
                if(prevNode)  prevNode->next=temp;
                break;
            }
            ListNode* nextNode=KNode->next;
            KNode->next=NULL;
            reverse(temp);
            if(temp==head)  head=KNode;
            else prevNode->next=KNode;
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};