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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        
        while(temp!=NULL && temp->next!=NULL){
            
            ListNode* ptr2 = temp->next;  
            int num = gcd(temp->val,ptr2->val); 
            ListNode* newNode = new ListNode(num,ptr2); 
            temp->next = newNode; 
            temp = ptr2; 
        }
        return head;
    }
};