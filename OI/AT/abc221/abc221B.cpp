#include <bits/stdc++.h>
using namespace std;

string s, t;

int main() {
  cin >> s >> t;
  if(s == t) {
    cout << "Yes" << '\n';
    return 0;
  }
  for(int i = 1; i < s.size(); i++) {
    swap(s[i - 1], s[i]);
    if(s == t) {
      cout << "Yes" << '\n';
      return 0;
    }
    swap(s[i - 1], s[i]);
  }
  cout << "No" << '\n';
  return 0;
}
