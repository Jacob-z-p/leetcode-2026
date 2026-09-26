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

    ListNode* swapPairs(ListNode* head) {
        // 简单特判
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* pre = &dummy;

        int num = 0;
        while (pre->next && pre->next->next) {
            ListNode *p = pre->next, *q = pre->next->next; 
            num++;

            if (num % 2 == 0) {
                pre = p;
                continue;
            }

            p->next = q->next;
            q->next = p;
            pre->next = q;
            pre = q;
        }

        return dummy.next;
    }
};