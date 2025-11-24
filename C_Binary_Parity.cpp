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
        int x;
        cin >> x;

        string s = "";

        while (x > 0)
        {
            int bit = x & 1;
            s.push_back('0' + bit);

            x = x / 2;
        }

        reverse(s.begin(), s.end());
        int size = s.length();

        long long sum = 0;

        for (int i = 0; i < size; i++)
        {
            int value = s[i];
            sum = sum + value;
        }

        if (sum % 2 == 0)
        {
            cout << "EVEN\n";
        }
        else
        {
            cout << "ODD\n";
        }
    }

    return 0;
}