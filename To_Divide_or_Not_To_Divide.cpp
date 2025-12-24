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

    long long t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        bool flag = false;

        if (a == b)
        {
            cout << -1 << '\n';
            continue;
        }

        if (c % b == 0)
        {
            long long d = c / a;
            int count = 0;
            for (long long i = d + 1; count <= 100000; i++)
            {
                count++;
                if (a * i >= c && (a * i) % b != 0)
                {
                    cout << a * i << '\n';
                    flag = true;
                    break;
                }
            }
        }
        else
        {
            long long d = c / a;
            int count = 0;
            for (long long i = d; count <= 100000; i++)
            {
                count++;
                if (a * i >= c && (a * i) % b != 0)
                {
                    cout << a * i << '\n';
                    flag = true;
                    break;
                }
            }
        }

        if (!flag)
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}