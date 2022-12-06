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
        if(!head->next) return head;
        bool odd = true;
        ListNode* middleNode = head;
        ListNode* currentNode = head->next;
        while(currentNode->next)
        {
            currentNode=currentNode->next;
            odd=!odd;
            if(!odd) middleNode = middleNode->next;
        }
        if(odd) middleNode = middleNode->next;
        return middleNode;
    }
};