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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *st=head,*nd=head;
        for(int i=1;i<k;i++){
            st=st->next;
        }
        ListNode* left=st;
        while(st->next){
            nd=nd->next;
            st=st->next;
        }

        swap(left->val,nd->val);
        return head;
    }
};