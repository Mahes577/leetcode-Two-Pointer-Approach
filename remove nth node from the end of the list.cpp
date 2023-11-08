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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start1=head;
        ListNode* start2=head;
        int i;
        ListNode *Temp=NULL;
        for(i=1;i<=n;i++) {
            start2=start2->next;
        }
        if(start2==NULL) {
            Temp=start1->next;
            delete(start1);
            return Temp;
        }
        while((start2->next)!=NULL) {
            start1=start1->next;
            start2=start2->next;
        }
        Temp=(start1->next)->next;
        delete(start1->next);
        start1->next=Temp;
        return head;
    }
};