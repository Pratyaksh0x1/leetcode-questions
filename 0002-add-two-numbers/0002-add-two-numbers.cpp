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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* dummyNode =new ListNode(-1);
       ListNode* curr=dummyNode;
       int carry=0;

       while(l1!=nullptr || l2!=nullptr){
        int sum=carry;
        if(l1 !=nullptr){
            sum=sum+l1->val;
        }if(l2 !=nullptr){
            sum=sum+l2->val;
        }
        ListNode* newN =new ListNode (sum%10);
        carry=sum/10;
        curr->next=newN;
        curr=curr->next;
        if(l1 !=nullptr){
            l1=l1->next;
        }
        if(l2 !=nullptr){
            l2=l2->next;
        }
        if(carry!=0){
            ListNode* newN=new ListNode(carry);
            curr->next=newN;
        }
       }
       return dummyNode->next;
    }
};