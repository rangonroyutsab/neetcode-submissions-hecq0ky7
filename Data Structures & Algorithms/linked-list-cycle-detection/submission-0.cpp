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
    bool hasCycle(ListNode* head) {
        map<ListNode*, bool> mp;
        ListNode* c = head;
        while (c != NULL) {
            if (mp[c]) {
                return true;
            }
            mp[c] = true;
            c = c->next;
        }
        return false;
    }
};
