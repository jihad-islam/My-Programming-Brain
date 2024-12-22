/*
    1. singly linked list palindrome kina check korte bolse. singly linked list e backward traverse kora jay na. but doubly te jay. jodi doubly linked list diye bolto palindrome kina, taile two pointers technique use kore ami palindrome ber korte partam. but eta jehetu singly linked list tai main linked list ke copy korbo then copy kora linked list ke reverse korbo. erpor copy kora reverse linked list ke and main linked list ke compare korbo, jodi same hoy taile palindrome, same na hole palindrome na.

    2. ekhon question hocche singly linked list copy korbo kivabe? amake main linked list ta theke onno ekta linked list e node insert kore kore copy korte hove. so insert function ke call korte hobe. jhamela ase r ki.

    2. palindrome hole true return korbo, na hole false return korbo.
*/

class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val) // copy korar prothom kaj holo main linked list theke onno ekta linked list e node copy kora.
    {
        ListNode *newNode = new ListNode(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next; // ekhane tail ke ami shamne pathay disi. normal tail insertion e newNode ke tail banay ditam.s
    }

    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    void print_list(ListNode *head)
    {
        ListNode *tmp = head;

        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }

    bool isPalindrome(ListNode *head) // ei function ta leetcode e dewa ase. that means amake kintu ekta head dise. now ei head diye amake kaj krote hobe.
    {
        ListNode *tmp = head;

        ListNode *myHead = NULL;
        ListNode *myTail = NULL;

        while (tmp != NULL)
        {
            insert_tail(myHead, myTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(myHead, myHead);
        print_list(myHead);

        tmp = head;
        ListNode *tmp2 = myHead;

        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }

        return true;
    }
};