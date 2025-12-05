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
        long long n;
        cin >> n;
        long long arr[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + n + 1);

        if (arr[1] == arr[2])
        {
            cout << "Yes\n";
            continue;
        }

        if (arr[1] == 1)
        {
            long long g = 0;

            for (int i = 2; i <= n; i++)
            {
                g = __gcd(arr[i], g);
            }

            if (g == 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }

            continue;
        }

        vector<long long> v2;
        for (int i = 2; i <= n; i++)
        {
            if (arr[i] % arr[1] == 0)
            {
                v2.push_back(arr[i]);
            }
        }

        sort(v2.begin(), v2.end());

        long long size = v2.size();
        if (size < 2)
        {
            cout << "No\n";
            continue;
        }

        long long g = 0;
        for (int i = 0; i < size; i++)
        {
            g = __gcd(v2[i], g);
        }

        if (g != arr[1])
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}