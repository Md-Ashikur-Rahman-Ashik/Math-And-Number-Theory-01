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
        long long a, b;
        cin >> a >> b;

        if (a > b && (a - b) == 1)
        {
            cout << 1 << '\n';
        }
        else if (a - b > 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            long long value = a - 1;
            long long result = b / value;
            cout << result << '\n';
        }
    }

    return 0;
}