#include <bits/stdc++.h>
using namespace std;

int pi[1000010];
string tx, pt;

void pf(string s) {
  for(int i = 1; i < s.size(); i++) {
    int j = pi[i - 1];
    while(j > 0 && s[i] != s[j]) {
      j = pi[j - 1];
    }
    if(s[i] == s[j]) {
      j++;
    }
    pi[i] = j;
  }
}

void KMP(string tx, string pt) {
  string tmp = tx + '#' + pt;
  pf(tmp);
  for(int i = tx.size() + 1; i < tmp.size(); i++) {
    if(pi[i] == tx.size()) {
      cout << i - tx.size() << '\n';
    }
  }
}

int main() {
  cin >> tx >> pt;
  KMP(pt, tx);
  return 0;
}
