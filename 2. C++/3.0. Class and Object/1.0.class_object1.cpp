/*
==========================================
Class এবং Object - Python OOP Concept
==========================================
Class কী?
Class হচ্ছে একটি blueprint বা ছাঁচ [00:35:22]।
পৃথিবীতে বা real world-এর যেকোনো entity-কে আমরা programming-এ Class হিসেবে define করতে পারি।

একটি Class-এর প্রধানত ২টি property থাকে: [00:35:29]
১. Data property: Constructor-এর ভেতরে আমরা যেসব variable রাখি (যেমন: কোনো কিছুর নাম, দাম বা সাইজ)।
২. Functional property: Class-এর ভেতরে তৈরি করা function-গুলো, যেগুলোকে OOP-এর ভাষায় method বলা হয় (যেমন: কোনো কাজ করা)।

Object কী?
Class বা ওই blueprint-এর ওপর ভিত্তি করে আমরা বাস্তবে যা তৈরি করি, সেটাই হলো Object।
Python-এ আমরা যা-ই define করি, সবই কোনো না কোনো Class-এর Object [00:39:36]।

Class এবং Object-এর মধ্যে সম্পর্ক কী?
Class হচ্ছে একটি template বা ছাঁচ, আর Object হচ্ছে সেই ছাঁচ থেকে তৈরি করা বাস্তবিক entity।
Class থেকে আমরা যতগুলো Object তৈরি করতে পারি, ততগুলোই সেই Class-এর instance বলে।
Class এবং Object-এর মধ্যে সম্পর্ককে আমরা real world-এর উদাহরণ দিয়ে বুঝতে পারি:
যেমন, একটি Car Class থেকে আমরা অনেকগুলো Car Object তৈরি করতে পারি।


in short:
    1. class holo blueprint.
    2. method holo class er vitorer function. constructor holo class er ekta special method.
    3. object holo class er instance. jemon: phone holo class. iphone, samsung, xiaomi etc holo phone class er object.
    4. object create korle constructor automatically call hoye jay.
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
   public:           // access modifier
    char name[100];  // name, roll, cgpa eigulake class er member variable bole. ei memeber variable gulo object er template hishebe kaj korbe.
    int roll;
    double cgpa;
};

int main() {
    Student a;  // ekhane Student holo class. and a holo class er variable that means object

    a.roll = 29;  // evabe class er moddhe jei variable gula ase oi variable gula access korte hoy. object er por dot dile kon variable e access korte chai sheta dekhabe.
    a.cgpa = 3.95;

    char temp[100] = "Jihad";  // but string usual niyome input newa jay na. aage ami ekta variable declare kore string input nibo. then oi variable take class er variable e copy kore dibo.
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    return 0;
}

/*
    1. ekhane Student holo ekta class er name. class er name usually capital letter e likha best practice.
    2. class er vitorer variable ke data property bole. so Student class er data property holo name, roll and cgpa.
    3. ekhane Student nam er class er size hobe, student class er moddhe jotogulo datatype newa hoise shobgulo datatype er size er jogfol + student nam er class er nijer size. jemon ekhane-
            i. char 1 byte. but newa hoise 100 character er string or array. tai etar size 100 bytes
            ii. int er size 4 bytes
            iii. double er size 8 bytes

        so total 112 bytes. sathe student class er nijossho size. ekek pc te class er jonne ekekrokom size store kroe. usually 4 or 8 bytes hoye thake.

    3.
*/