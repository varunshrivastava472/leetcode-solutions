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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        // Fix 1: Assign the pointers themselves, not the integer values.
        ListNode* head1 = list1;
        ListNode* head2 = list2; // Fixed from list1 to list2
        ListNode* head3 = nullptr;

        // Fix 2: For an ascending sorted list, head3 should track the smaller initial node.
        if (list1->val < list2->val) {
            head3 = list1;
            head1 = head1->next;
        } else {
            head3 = list2;
            head2 = head2->next;
        }

        ListNode* i = head1;
        ListNode* j = head2;
        ListNode* ans = head3; // This acts as the moving tail pointer
        
        // Fix 3: Assign next nodes to pointer references instead of raw integers.
        while (i != nullptr && j != nullptr) {
            if (i->val < j->val) { // Fixed comparison for ascending order
                ans->next = i;
                i = i->next;
            } else {
                ans->next = j;
                j = j->next;
            }
            ans = ans->next;
        }

        // Fix 4: Directly append the remaining slice of the leftover list.
        if (i != nullptr) {
            ans->next = i;
        }
        if (j != nullptr) {
            ans->next = j;
        }

        // Return the start of the merged sequence
        return head3; 
    }
};
