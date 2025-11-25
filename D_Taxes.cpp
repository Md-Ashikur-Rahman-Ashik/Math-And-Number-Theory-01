#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isPrime(int integerValue)
{
    if (integerValue == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= integerValue; i++)
    {
        if (integerValue % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    if (isPrime(a))
    {
        cout << 1;
    }
    else if (a % 2 == 0)
    {
        cout << 2;
    }
    else
    {
        if (isPrime(a - 2))
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }

    return 0;
}