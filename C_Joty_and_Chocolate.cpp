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

  long long n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;

  long long countRed = 0;
  long long countBlue = 0;

  for (int i = 1; i <= n; i++)
  {
    if (i % a == 0)
    {
      countRed++;
    }
    else if (i % b == 0)
    {
      countBlue++;
    }
  }

  cout << (countRed * p) + (countBlue * q);

  return 0;
}