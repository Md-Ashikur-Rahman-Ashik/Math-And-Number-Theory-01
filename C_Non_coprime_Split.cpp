#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int findDivisor(int l)
{
    for (int i = 2; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            return i;
        }
    }

    return l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3)
        {
            cout << -1 << '\n';
            continue;
        }

        if (r > l)
        {
            if (r % 2 == 0)
            {
                cout << r / 2 << " " << r / 2 << '\n';
            }
            else
            {
                cout << (r - 1) / 2 << " " << (r - 1) / 2 << '\n';
            }
        }
        else if (r == l)
        {
            if (findDivisor(l) == l)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << findDivisor(l) << " " << r - findDivisor(l) << '\n';
            }
        }
    }

    return 0;
}