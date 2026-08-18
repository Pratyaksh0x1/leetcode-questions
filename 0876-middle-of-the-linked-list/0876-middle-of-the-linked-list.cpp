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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        vector< ListNode*>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp);
            temp=temp->next;
        }
        int i=0;
        int n=ans.size();
        ListNode* mid=ans[n/2];
        
         //mid=ans[(n/2)+1];}
        head=mid;
        return head;
    }
};