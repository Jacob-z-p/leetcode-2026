/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *> us;
        while (head != nullptr) {
            if (us.count(head)) {
                return head;
            }
            us.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};