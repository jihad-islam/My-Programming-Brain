/*
    1. ekta linked list er middle node ta return kora lagbe.
    2. odd hole  :  1 2 3     middle 2 return korbo.
       even hole :  1 2 3 4   middle 3 return korbo. mane middle to 2.5 hobe so seil er node ta return korbo
    3. but even hoile amar kache majher duita node ow chaite pare. then size er ordhke na giye (size(head) /2) - 1 porjonto loop chalaya majher duita node access kora jabe maybe. ami try kori nai. try kore dekhte hobe.
*/

// solution 1
class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;

        for (int i = 0; i < size(head) / 2; i++)
            temp = temp->next;

        cout << temp;
        return temp; // jehetu *middleNode ekta  pointer tai amake address  pathaite hobe. value pathaile hobe na.
    }
};

// solution 2