#include <bits/stdc++.h>
using namespace std;

string s, t;

int main() {
  cin >> s >> t;
  for(int i = 0; i < s.size() - 1; i++) {
    if(s[i] != t[i]) {
      swap(s[i], s[i + 1]);
      break;
    }
  }
  cout << (s == t? "Yes" : "No") << '\n';
  return 0;
}
