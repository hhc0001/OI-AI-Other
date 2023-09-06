#include <bits/stdc++.h>
using namespace std;

struct node {
  int pos, num;
}arr[500050];

int n, a, b, ans[200020], len;

bool cmp(node a, node b) {
  return a.pos == b.pos? a.num < b.num : a.pos < b.pos;
}

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a >> b;
    arr[++len] = {a, 1}, arr[++len] = {a + b, -1};
  }
  sort(arr + 1, arr + len + 1, cmp);
  int p = 0, lst = 0, cnt = 0;
  for(int i = 1; i <= len; i++) {
    p = arr[i].pos;
    ans[cnt] += p - lst;
    cnt += arr[i].num, lst = p;
  }
  for(int i = 1; i <= n; i++) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
  return 0;
}
