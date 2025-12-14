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
        int a, b;
        cin >> a >> b;

        long long count = 2;
        bool flag = false;

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << count << " ";
                if (!flag)
                {
                    count = 3;
                }
                else
                {
                    count = 2;
                }
            }

            flag = true;

            if (flag)
            {
                count = 3;
            }
            else
            {
                count = 2;
            }

            cout << '\n';
        }
    }

    return 0;
}