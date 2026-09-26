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

    int countListnodeNum(ListNode* p) {
        int sum = 0;
        if (p == nullptr) {
            return sum;
        }
        while (p) {
            ++sum;
            p = p->next;
        }
        return sum;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = countListnodeNum(head);
        
        if (n > m) { return head; }
        if (n == m) { return head->next; }
        
        int nowNum = 0;
        int num = m - n + 1;
        ListNode* p = head;
        while (p) {
            ++nowNum; 
            if (nowNum == num - 1) {
                p->next = p->next->next;
                break;
            }
            p = p->next;
        }

        return head;
    }
};