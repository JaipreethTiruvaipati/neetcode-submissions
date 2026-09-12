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
    bool hasCycle(ListNode* head) {
        ListNode*curr=head;
        if(head==nullptr)return false;
        map<ListNode*,int>mp;
        while(curr!=nullptr){
            if(mp.find(curr)!=mp.end()){
                return true;
            }else{
                mp[curr]=1;
                curr=curr->next;
            }
        }
        return false;
    }
};
