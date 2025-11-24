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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool flag = true;

        long long firstGCD = 0;
        long long secondGCD = 0;

        for (int i = 0; i < n; i = i + 2)
        {
            firstGCD = __gcd(firstGCD, v[i]);
        }

        for (int i = 1; i < n; i = i + 2)
        {
            if (v[i] % firstGCD == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << firstGCD << '\n';
        }
        else
        {
            flag = true;

            for (int i = 1; i < n; i = i + 2)
            {
                secondGCD = __gcd(secondGCD, v[i]);
            }

            for (int i = 0; i < n; i = i + 2)
            {
                if (v[i] % secondGCD == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                cout << secondGCD << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}