#include <iostream>
#include <vector>
using namespace std;

class myStack
{
private:
    vector<int> v; // Data private রাখা ভালো প্র্যাকটিস

public:
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        // Stack খালি কিনা তা চেক করা (Underflow handle করা)
        if (v.empty()) {
            cout << "Stack Underflow! Stack ekhon khali." << endl;
            return;
        }
        v.pop_back();
    }

    int top()
    {
        // Stack খালি থাকলে top value দেখা যাবে না
        if (v.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty(); // vector এর নিজস্ব empty() ফাংশন সরাসরি return করে দিলাম
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) 
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}