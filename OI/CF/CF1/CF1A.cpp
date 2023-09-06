#include <bits/stdc++.h>
using namespace std;

long long n, m, a;

int main() {
  cin >> n >> m >> a;
  cout << ((n / a) + bool (n % a)) * ((m / a) + bool(m % a)) << '\n';
  return 0;
}
