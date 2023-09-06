#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
  cin >> a >> b >> c;
  cout << (b / c * c >= a? b / c * c : -1) << '\n';
  return 0;
}
