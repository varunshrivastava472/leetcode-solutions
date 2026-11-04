class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;

        ListNode* temp = head;

        while(temp != nullptr)
        {
            temp = temp->next;
            count++;
        }

        if(count == n)
        {
            ListNode* del = head;
            head = head->next;
            delete del;

            return head;
        }

        temp = head;

        for(int i = 0; i < count-n-1; i++)
        {
            temp = temp->next;
        }

        ListNode* del = temp->next;

        temp->next = temp->next->next;

        delete del;

        return head;
    }
};