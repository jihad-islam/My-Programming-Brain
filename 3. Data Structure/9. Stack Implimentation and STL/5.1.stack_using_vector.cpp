#include <bits/stdc++.h>
using namespace std;

class myStack {
   private:
    vector<int> v;  // Data private রাখা ভালো প্র্যাকটিস

   public:
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        v.pop_back();
    }

    int top() {
        if (v.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        // return v.empty();

        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main() {
    myStack st;

    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    while (n--) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}