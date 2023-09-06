#include <bits/stdc++.h>
using namespace std;

int k;
long long ra, rb;
string a, b;

int main() {
  cin >> k >> a >> b;
  for(int i = 0; i < a.size(); i++) {
    ra = (ra * k) + (a[i] - '0');
  }
  for(int i = 0; i < b.size(); i++) {
    rb = (rb * k) + (b[i] - '0');
  }
  cout << ra * rb << '\n';
  return 0;
}
