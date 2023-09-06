#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
  cin >> a >> b >> c;
  for(int i =  a; i <= b; i++) {
    if(i % c == 0) {
      cout << i << '\n';
      return 0;
    }
  }
  cout << -1 << '\n';
  return 0;
}
