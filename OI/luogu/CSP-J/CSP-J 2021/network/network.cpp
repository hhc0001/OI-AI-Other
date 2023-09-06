#include <bits/stdc++.h>
using namespace std;

int n;
string c, d;
map<string, int> s;

bool check(string t) {
  int arr[100] = {0}, len = 1, cnt = 0;
  if(t[0] == '.' || t.size() > 21) {
    return 1;
  }
  for(int i = 0; i < t.size(); i++) {
    if(isdigit(t[i])) {
      arr[len] = arr[len] * 10 + (t[i] - '0');
    }else {
      len++;
      if(len == 5 && t[i] != ':' || len != 5 && t[i] != '.') {
        return 1;
      }
    }
  }
  if(len != 5) {
    return 1;
  }
  for(int i = 1; i <= len; i++) {
    if(i < 5 && arr[i] > 255 || i == 5 && arr[i] > 65535) {
      return 1;
    }
  }
  return 0;
}

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> c >> d;
    if(check(d)) {
      cout << "ERR" << '\n';
      continue;
    }
    if(c == "Server") {
      if(s.find(d) != s.end()) {
        cout << "FAIL" << '\n';
      }else {
        s[d] = i;
        cout << "OK" << '\n';
      }
    }else {
      if(s.find(d) != s.end()) {
        cout << s[d] << '\n';
      }else {
        cout << "FAIL" << '\n';
      }
    }
  }
  return 0;
}
