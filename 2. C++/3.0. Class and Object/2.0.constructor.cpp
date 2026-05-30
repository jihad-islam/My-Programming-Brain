/*
    1. Constructor hocche class er ekta function. construtor er nam hoy class er nam onujayi. it means constructor and class er nam same hoy. and constructor kono value return kore na.

    2. constructor value return kore na but constructor e parameter pass hoy.


==========================================
Constructor কী? (__init__)
==========================================
Constructor হলো class-এর ভেতরের একটি special function বা magic method।
ভিডিওর ভাষায়, এর একটি "Superpower" আছে! [01:02:18]

Superpower-টি হলো:
সাধারণ function বা method-কে আমাদের manually call করতে হয়, কিন্তু constructor-কে call করতে হয় না।
যখনই আমরা class-এর কোনো object তৈরি করি, constructor নিজে নিজেই execute হয়ে যায় [01:03:57]।

সাধারণত Data property (variable)-গুলোকে initialize করার জন্য constructor ব্যবহার করা হয়।
"""
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {  // constructor function. kono kichu return korbe na. but parameter nibe.
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main() {
    Student rahim(29, 10, 5.00);  // constructor use kore value assign kora.
    Student karim(10, 5, 4.33);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

/*
    1. Student class er data property holo roll, cls, gpa.
    2. Student class er functional property holo constructor function or method.
*/