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

    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        if (a == 2)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }

        return 0;
    }
    else
    {
        int b = a;
        b = b - 2;

        if (b > 1)
        {
            vector<int> v;

            for (int i = 1; i * i <= b; i++)
            {
                if (b % i == 0)
                {
                    v.push_back(i);

                    if (b / i != i)
                    {
                        v.push_back(b / i);
                    }
                }
            }

            int size = v.size();
            if (size == 2)
            {
                cout << 2;
                return 0;
            }
            else
            {
                cout << 3;
                return 0;
            }
        }
        else
        {
            cout << 1;
            return 0;
        }
    }

    vector<int> v;

    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);

            if (a / i != i)
            {
                v.push_back(a / i);
            }
        }
    }

    int size = v.size();
    if (size == 2)
    {
        cout << 1;
        return 0;
    }

    return 0;
}