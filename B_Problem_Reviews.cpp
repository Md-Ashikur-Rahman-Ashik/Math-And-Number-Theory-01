#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        set<int> integerSet;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            integerSet.insert(x);
        }

        bool flag = true;

        for (auto value : integerSet)
        {
            if (value <= 4)
            {
                flag = false;
                cout << "NO\n";
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
    }

    return 0;
}