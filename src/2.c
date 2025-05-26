/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
        int sum = 0;
        int carry = 0;

        struct ListNode* result =
            (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode *it = result, *prev;
        while (l1 || l2)
        {
                prev = it;
                sum = 0;
                if (l1)
                {
                        sum += l1->val;
                        l1 = l1->next;
                }
                if (l2)
                {
                        sum += l2->val;
                        l2 = l2->next;
                }
                sum += carry;
                carry = sum / 10;
                sum %= 10;
                it->val = sum;
                // BAD, ONE HEAP ALLOCATION PER LISTNODE IS LESS EFFICIENT THAN
                // A SINGLE BUFFER ALLOC FOR ALL THE LISTNODES BUT IT WON'T PASS
                // THE TESTCASES OTHERWISE
                it->next = (struct ListNode*)malloc(sizeof(struct ListNode));
                it = it->next;
        }
        if (carry)
        {
                it->val = carry;
                it->next = NULL;
        }
        else
        {
                prev->next = NULL;
        }
        return result;
}
