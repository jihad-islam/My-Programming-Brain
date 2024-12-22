#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    cout << v.max_size() << endl
         << endl; // vector er maximum size ber korar function. windows e onek size rakhte dey. but online judge e max 10^6 space dibe.

    cout << v.capacity() << endl // vector e kono element nai. tai vector er capacity 0 dekhabe.
         << endl;

    /*
        1. basic: dynamic array te size baranor jonne new ekta extended size er array banaitam then new array te value rekhe old array ta delete kore ditam
        2. ei kajtai shortcut kore push_back() function. push_back() function vector er size baray and value assign kore.
    */
    v.push_back(10);
    cout << v.capacity() << endl; // ekta value assign korsi tai capacity 1 dekhabe.

    v.push_back(20);
    cout << v.capacity() << endl; // second value assign korsi tai capacity 2 dekhabe
    v.push_back(30);
    cout << v.capacity() << endl; // third value assign korsi capacity 3 dekhanor kotha. but twist ekahnei. capacity funtion digun size assign kore. tai capacity 4 dekhabe.
    v.push_back(40);
    cout << v.capacity() << endl; // ekhn 4 no index faka ase tai ei value 4 no index e boshbe and capacity 4 dekhabe.
    v.push_back(50);
    cout << v.capacity() << endl
         << endl; // 4 ta index ei full hoye gese tai index expand korbe. and expand korbe double size niye. so capacity 8 hobe.

    v.clear(); // clear() function index er value delete kore dey but memory delete kore na.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // jehetu clear kore disi tai hoy 0 dekhabe or kono output show korbe na.
    }
    cout << endl;

    cout << v.empty() << endl; // empty function check kore vector empty kina. eta just TF return kore. empty hole T(1) and empty na hole F(0) return korbe

    return 0;
}