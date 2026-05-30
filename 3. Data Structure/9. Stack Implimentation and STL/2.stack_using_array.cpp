/*
    ========================================
    STACK (ARRAY IMPLEMENTATION) - FULL IDEA
    ========================================

    Stack হলো Linear Data Structure যা LIFO (Last In First Out) rule follow করে।

    LIFO = যে element সবার শেষে ঢুকবে (push),
    সেই element সবার আগে বের হবে (pop)।

    বাস্তব উদাহরণ:
    প্লেটের stack

    Push:
        10
        20
        30

    Stack:
        30 <- Top
        20
        10

    Pop করলে:
        30 আগে বের হবে।

    ----------------------------------------
    VARIABLES
    ----------------------------------------

    int topIndex;

    Stack এর বর্তমান Top element কোন index এ আছে তা track করে।

    topIndex = -1
        → Stack Empty. -1 na dile garbage value thakto.

    topIndex = 0
        → ১টি element আছে

    topIndex = 2
        → ৩টি element আছে


    int arr[MAX];

    Stack এর data store করার জন্য fixed size array। jehetu array use kortesi tai amake size aagei define kore dite hobe.

    ----------------------------------------
    CONSTRUCTOR
    ----------------------------------------

    Stack() {
        topIndex = -1;
    }

    Object create হওয়ার সাথে সাথেই constructor call হয়।

    কাজ:
        Stack কে Empty state এ initialize করা।

    যদি constructor না থাকত,
    topIndex garbage value নিয়ে শুরু করতে পারত,
    ফলে push/pop operation ভুল কাজ করত।

    ----------------------------------------
    PUSH OPERATION
    ----------------------------------------

    push(int x)

    কাজ:
        Stack এর Top এ নতুন element insert করা।

    Step 1:
        Stack full কিনা check করা।

        if(topIndex >= MAX - 1)

    কারণ:
        Array এর শেষ valid index হলো MAX - 1. mane stack tato array diye implement kortesi. and array er size 100 mane array er index 0-99. so topIndex 99 mane stack full. topIndex 100 mane stack overflow.

    যদি Stack full হয়:
        Overflow message দেখাবে।

    Step 2:
        topIndex এক ধাপ বাড়ানো।

        topIndex++;

    Step 3:
        নতুন value Top position এ রাখা।

        arr[topIndex] = x;

    উদাহরণ:

    শুরুতে:
        topIndex = -1

    push(10)

    topIndex = 0
    arr[0] = 10

    push(20)

    topIndex = 1
    arr[1] = 20

    push(30)

    topIndex = 2
    arr[2] = 30

    Array:

    Index: 0   1   2
    Value:10  20  30

    Top = 30

    ----------------------------------------
    POP OPERATION
    ----------------------------------------

    pop()

    কাজ:
        Top element remove করা।

    Step 1:
        Stack empty কিনা check করা।

        if(topIndex < 0)

    Empty হলে:
        Underflow message দেখাবে।

    Step 2:
        topIndex এক ধাপ কমানো।

        topIndex--;

    গুরুত্বপূর্ণ:

    pop() element delete করে না।

    শুধু Top কে পিছিয়ে দেয়।

    উদাহরণ:

    Index: 0   1   2
    Value:10  20  30

    topIndex = 2

    pop()

    topIndex = 1

    এখন logically Stack হলো:

    20 <- Top
    10

    30 memory তে থাকলেও Stack এর অংশ নয়।

    ----------------------------------------
    TOP OPERATION
    ----------------------------------------

    top()

    কাজ:
        বর্তমান Top element return করা।

    Step 1:
        Stack empty কিনা check করা।

        if(topIndex < 0)

    Empty হলে:
        Error message দেখাবে।

    Step 2:
        Top value return করবে।

        return arr[topIndex];

    উদাহরণ:

    topIndex = 2

    return arr[2]

    Output:
        30

    ----------------------------------------
    SIZE OPERATION
    ----------------------------------------

    size()

    কাজ:
        Stack এ মোট কয়টি element আছে তা return করা।

    Formula:

    topIndex + 1

    কারণ:

    topIndex = -1
        size = 0

    topIndex = 0
        size = 1

    topIndex = 1
        size = 2

    topIndex = 2
        size = 3

    ----------------------------------------
    EMPTY OPERATION
    ----------------------------------------

    empty()

    কাজ:
        Stack Empty কিনা check করা।

    Condition:

    topIndex < 0

    True
        → Stack Empty

    False
        → Stack এ element আছে

    Return Type:
        bool

    ----------------------------------------
    MAIN FUNCTION
    ----------------------------------------

    Stack st;

    নতুন Stack object তৈরি।

    Constructor call হবে।

    topIndex = -1

    ----------------------------------------

    st.push(10);

    Stack:

    10 <- Top

    ----------------------------------------

    st.push(20);

    Stack:

    20 <- Top
    10

    ----------------------------------------

    st.push(30);

    Stack:

    30 <- Top
    20
    10

    ----------------------------------------

    cout << st.top();

    Output:
        30

    কারণ Top element = 30

    ----------------------------------------

    cout << st.size();

    Output:
        3

    কারণ Stack এ ৩টি element আছে।

    ----------------------------------------

    while(!st.empty())

    Loop চলবে যতক্ষণ Stack Empty না হয়।

    প্রতিবার:

    1. Top print করবে
    2. Top remove করবে

    Iteration 1:

    Top = 30

    Print:
        30

    Pop

    Stack:

    20 <- Top
    10

    ----------------------------------------

    Iteration 2:

    Top = 20

    Print:
        20

    Pop

    Stack:

    10 <- Top

    ----------------------------------------

    Iteration 3:

    Top = 10

    Print:
        10

    Pop

    Stack Empty

    topIndex = -1

    ----------------------------------------

    Final Output:

    Current Top: 30
    Current Size: 3

    Stack Elements:
    30
    20
    10

    ----------------------------------------
    TIME COMPLEXITY
    ----------------------------------------

    push()   = O(1)
    pop()    = O(1)
    top()    = O(1)
    size()   = O(1)
    empty()  = O(1)

    সব operation constant time এ সম্পন্ন হয়।

    ----------------------------------------
    SPACE COMPLEXITY
    ----------------------------------------

    O(MAX)

    কারণ MAX size এর array আগে থেকেই allocate করা আছে।
*/

#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {
   private:
    int topIndex;  // Stack এর top element এর index
    int arr[MAX];

   public:
    Stack() {  // Constructor. Object create হলেই stack empty থাকবে
        topIndex = -1;
    }

    // push operation
    void push(int x) {
        if (topIndex >= MAX - 1) {
            cout << "Stack Overflow! Stack full." << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = x;
    }

    // pop operation
    void pop() {
        if (topIndex < 0) {
            cout << "Stack Underflow! Stack empty." << endl;
            return;
        }

        topIndex--;
    }

    // top operation: Stack এর top element return করবে
    int top() {
        if (topIndex < 0) {
            cout << "Stack is Empty." << endl;
            return -1;
        }

        return arr[topIndex];
    }

    // size operation
    int size() {
        return topIndex + 1;
    }

    // empty operation
    bool empty() {
        return topIndex < 0;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Current Top: " << st.top() << endl;
    cout << "Current Size: " << st.size() << endl;

    cout << "\nStack Elements:" << endl;

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}