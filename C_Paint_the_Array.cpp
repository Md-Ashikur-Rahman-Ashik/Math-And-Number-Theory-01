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

        vector<bool> boolVector(n);
        bool flag = true;
        long long desiredValue = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                boolVector[j] = false;
            }

            flag = true;

            for (int j = 0; j < n; j++)
            {
                if (v[j] % v[i] == 0)
                {
                    boolVector[j] = true;
                }

                if (j > 0)
                {
                    if (boolVector[j] == boolVector[j - 1])
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
            {
                desiredValue = v[i];
                break;
            }
        }

        cout << desiredValue << '\n';
    }

    return 0;
}