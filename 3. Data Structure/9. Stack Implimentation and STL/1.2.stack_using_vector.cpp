/*
    note: stack and queue onek vabei implement kora jay. but shobcheye easy holo vector diye kora. linked list diyew kaje lage majhe majhe. but exam e details e code korte hobe. so shurute vector diye concept clear korbo. then details er jonne array er ta shikhbo. and jodi kokhon kaje lage doubly diye dekhbo. and stack and queue er alada stl ase. cp korar shomoy ei stl use korle somossa nai. but job interview te direct stack and queue er stl use na korai valo. so shurute vector then array for concept.
*/

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