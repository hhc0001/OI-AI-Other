#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
vector<int> s1, s2, s3, s4;

bool cmp(int a, int b) {
  return a > b;
}

void DFS(int x) {
  if(!x) {
    int na = 0, nb = 0;
    s3 = s1;
    sort(s3.begin(), s3.end(), cmp);
    s4 = s2;
    sort(s4.begin(), s4.end(), cmp);
    for(int i : s3) {
      na = na * 10 + i;
    }
    for(int i : s4) {
      nb = nb * 10 + i;
    }
    ans = max(ans, na * nb);
    return ;
  }
  s1.push_back(x % 10);
  DFS(x / 10);
  s1.pop_back(), s2.push_back(x % 10);
  DFS(x / 10);
  s2.pop_back();
}

int main() {
  cin >> n;
  DFS(n);
  cout << ans << '\n';
  return 0;
}
