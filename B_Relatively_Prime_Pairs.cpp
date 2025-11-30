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

    long long l, r;
    cin >> l >> r;

    cout << "YES\n";

    for (long long i = l; i <= r; i = i + 2)
    {
        cout << i << " " << i + 1 << '\n';
    }

    return 0;
}