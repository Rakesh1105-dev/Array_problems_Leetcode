class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right) {
            return head;
        }

        ListNode* t = head;
        ListNode* before = NULL;
        int pos = 1;

        while(pos < left) {
            before = t;
            t = t->next;
            pos++;
        }

        ListNode* curr = t;
        ListNode* prev = NULL;
        int cnt = right - left + 1;

        while(cnt--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        // t ab reversed part ka tail ban gaya hai
        t->next = curr;

        if(before) {
            before->next = prev;
            return head;
        }

        // left == 1
        return prev;
    }
};