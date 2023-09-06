#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main() {
  for(cin >> t; t--; ) {
    cin >> s;
    if(s.size() != 8 || s[0] < 'A' || s[0] > 'Z' || s[7] < 'A' || s[7] > 'Z') {
      cout << "NO" << '\n';
      continue;
    }
    int num = 0, f = 0;
    for(int i = 1; i < 7; i++) {
      if(s[i] < '0' || s[i] > '9') {
        f = 1;
        break;
      }
      num = num * 10 + (s[i] - '0');
    }
    if(num < 100000 || f) {
      cout << "NO" << '\n';
      continue;
    }
    cout << "YES" << '\n';
  }
  return 0;
}
