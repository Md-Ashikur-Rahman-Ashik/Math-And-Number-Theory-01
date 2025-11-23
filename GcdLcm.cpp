#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int GCD(int a, int b)
// {
//     return __gcd(a, b);
// }

int LCM(int a, int b)
{
    return (a / (__gcd(a, b))) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    // cout << GCD(a, b);
    cout << LCM(a, b);

    return 0;
}