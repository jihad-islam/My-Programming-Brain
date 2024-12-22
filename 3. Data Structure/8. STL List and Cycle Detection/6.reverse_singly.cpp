/*
    1. aagew singly linked list reverse korsi recursion diye, ebaro recursion use kortesi. parthokko ta holo ager bar just reverse e print korsi, but head same chilo. but ebar recursion er maddhome tail ke head banaya reverse e print korbo.

    2. ei code bujhle recursion aaro clear hobe.

    3. learning: recursion kokhono last node return kore na. last node er aager node ta return kore. eta code er moddhe bekkha kore ase.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_recursion(Node *n)
{
    // base case
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursion(n->next);
}

void print_reverse(Node *n) // eita chilo normal recursion. eita use kore reverse e print kora hoisilo. ei code e ei function er kono kaj nai. just compare korar jonne rakha hoise.
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->val << " ";
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(Node *&head, Node *current) // ekhane 30 return ashbe na. 30 return vitorer recursion function e ashbe.
{
    if (current->next == NULL) // current node diye traverse kortesi.  current node jotokhon na null e pouchabe recursion cholbe. eta base case.
    {
        head = current; // if condition er moddhe tokhoni dhukbe jokhon ami last node e pouchabo. and last node taake head banay dibo. to ami ei code e 4 ta node nisi. last node holo c=40, etai tail. so 40 ke ami head banay dilam and 40 er next e NULL ase.

        return; // ekhn ami 40 theke return korbo. 40 theke return korle ami 30 pabo, 40 pabo na. 40 er kaj if er moddhei sesh hoye gese.
    }

    reverse(head, current->next); // waiting zone // recursive call.  eikhane ekta important bishoy holo, jokhon 30 return ashbe tokhn ei recursion function e return ashbe. ekhane 40 ba tail return ashbe na. 40 er kaj aagei sesh. tar maane ekhane learning hocche, recursion e jokhon return ashe tokhon last node or last variable return ashe na. karon variable or node ta jokhon last recursion call hoise(not return call) tokhoni oitar kaj oi recursion call ei hoye jay. ekhn 30 je ekhane return ashlo ekhn 30 er kaj hobe ei recursion function er porer statement gulay, aager statement er kono kaj nai.

    current->next->next = current; // eikhane 40 holo head and 30 holo current node. ekhn head(40) er next e 30 ke boshabo. ekhn 40 er next e je 30 ke boshabo, but amar kache to current node or 30 ase. so current node or 30 er sahajje 40 ke access kore 40 er next e 30 er address boshabo.

    current->next = NULL; // ekhn 30 er next e NULL boshabo. recursion er return e abar jokhon 20 ashbe then 20 er maddhome 30 e access kore 30 er next e NULL er jaygay 20 er address boshabo.
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    reverse(head, head); // duita head pathabo. ekta original head and arekta traverse er jonne.

    print(head); // reverse function diye node taake reverse korlam and print function diye reverse kora node taake print korlam.

    return 0;
}