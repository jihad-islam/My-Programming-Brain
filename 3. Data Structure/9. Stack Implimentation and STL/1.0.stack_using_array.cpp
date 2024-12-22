/*
    1. stack notun kono data structure na. eta just koykta function er somosti or operation. so vector diye implementation korte chaile just vector declare kore vector e oi function gulo like push, pop, etc implementation korlei stack hoye jabe.
*/

#include <bits/stdc++.h>
using namespace std;

class myStack // etar moddhe protita function er complexity O(1). so n shonkhok value input korle complexity hobe O(n).
{
public:
    vector<int> v; // dynamic array use korbo tai sorasori vector use kortesi.

    void push(int val) // stack e ekta value push korbe, kono kichu return korbe na.
    {
        v.push_back(val);
    }

    void pop() // tail delete korbe
    {
        v.pop_back(); // last value ta stack theke ber kore.
    }

    int top() // stack er last value or tail output dibe
    {
        return v.back(); // stack er last value jeta insert korsi oita return korbe.
    }

    int size()
    {
        return v.size(); // stack er size return korbe.
    }

    bool empty()
    {
        if (v.size() == 0) // 0 hole empty that means true return korbe
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st; // static implimentation kortesi dynamic array diye but stack nije static. tai static way te declare korsi. jehetu static tai stack ke access korbo dot diye, jodi dynamic hoito taile arrow diye access korte hoito.

    st.push(10); // 10 push korlam
    st.push(20); // 20 push korlam

    cout << st.top() << endl; // last value 20 ke dekhabe.

    st.pop(); // last value or 20 ke delete kore dibe.

    cout << st.top() << endl; // 20 delete  hoye gese ebar last value 10 ke dekhabe. but stack jodi khali thake tokhon top() use korle segmentation fault dibe.

    if (st.empty() == false) // empty() ekta boolean function. stack khali na hoile top() function execute hobe.
    {
        cout << st.top() << endl;
    }

    return 0;
}