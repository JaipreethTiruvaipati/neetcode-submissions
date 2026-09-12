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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*head=nullptr;
        ListNode*curr1=list1;
        ListNode*curr2=list2;
        ListNode* curr=head;
        if(curr1==nullptr)return curr2;
        if(curr2==nullptr)return curr1;
        while(curr1!=nullptr and curr2!=nullptr){
            if(curr1->val<curr2->val){
                ListNode* node=new ListNode(curr1->val);
                if(head==nullptr){
                    head=node;
                    curr=node;
                }else{
                     curr->next=node;
                     curr=curr->next;
                }
                curr1=curr1->next;
            }else{
                ListNode*node= new ListNode(curr2->val);
                if(head==nullptr){
                    head=node;
                    curr=node;
                }else{
                    curr->next=node;
                    curr=curr->next;
                }
                curr2=curr2->next;
            }
        }
        if(curr2==nullptr){
            curr->next=curr1;
        }
        else if(curr1==nullptr){
            curr->next=curr2;
        }
        return head;

    }
};
