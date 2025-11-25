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

  long long firstResult = n / a;
  long long secondResult = n / b;
  long long LCM = (a / __gcd(a, b)) * b;
  long long combinedResult = n / LCM;

  firstResult = firstResult - combinedResult;
  secondResult = secondResult - combinedResult;

  if (p > q)
  {
    combinedResult = combinedResult * p;
  }
  else
  {
    combinedResult = combinedResult * q;
  }

  cout << (firstResult * p) + (secondResult * q) + combinedResult;

  return 0;
}