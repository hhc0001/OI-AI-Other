#include <bits/stdc++.h>
using namespace std;

int n, arr[100010], t[100010];

int lowbit(int x) {
  return x & -x;
}

void build() {
  for(int i = 1; i <= n; i++) {
    t[i] += arr[i];
    if(i + lowbit(i) <= n) {
      t[i + lowbit(i)] += t[i];
    }
  }
}

void add(int p, int x) {
  arr[p] += x;
  for(int i = p; i <= n; i += lowbit(i)) {
    t[i] += x;
  }
}

int queryf(int r) {
  int rt = 0;
  for(int i = r; i > 0; i -= lowbit(i)) {
    rt = rt + t[i];
  }
  return rt;
}

int query(int l, int r) {
  return queryf(r) - queryf(l - 1);
}

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  build();
  return 0;
}
