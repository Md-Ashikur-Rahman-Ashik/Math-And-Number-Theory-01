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
        long long l, r;
        cin >> l >> r;

        if (r % l == 0)
        {
            cout << l << " " << r << '\n';
            continue;
        }

        if (r < 2 * l)
        {
            cout << -1 << " " << -1 << '\n';
            continue;
        }

        cout << l << " " << 2 * l << '\n';
    }

    return 0;
}