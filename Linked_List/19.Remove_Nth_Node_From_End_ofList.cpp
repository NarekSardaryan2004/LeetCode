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
        if (head == nullptr) return nullptr;

        int length = 0;
        ListNode* p1 = head;
        while (p1 != nullptr) {
            length++;
            p1 = p1->next;
        }

        if (n == length) {
            ListNode* newHead = head->next;
            delete head;

            return newHead;
        }

        ListNode* p2 = head;
        for (int i = 0; i < length - n - 1; ++i) {
            p2 = p2->next;
        }

        ListNode* del = p2->next;
        p2->next = del->next;

        delete del;

        return head;
    }
};
