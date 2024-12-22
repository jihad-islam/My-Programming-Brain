#include <bits/stdc++.h>
using namespace std;

// const int size = 1e3 + 5;
vector<int> arr[1005];

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        // arr[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int src, des;
        cin >> src >> des;

        if (src == des)
        {
            cout << "YES" << endl;
            continue;
        }

        bool pathExists = false;
        for (auto child : arr[src])
            if (child == des)
            {
                pathExists = true;
                break;
            }

        if (pathExists)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}

// my code

#include <bits/stdc++.h>
using namespace std;

const int size = 1e3 + 5;
vector<int> arr[size];

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        // arr[b].push_back(a);
    }

    int src, des;
    cin >> src >> des;

    int q;
    cin >> q;

    while (q--)
    {
        if (src == des)
            cout << "YES" << endl;

        else
            for (auto child : arr[src])
            {
                if (child == des)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
    }

    return 0;
}
