#include <bits/stdc++.h>
using namespace std;

int ans = 0;
string n;
int wei[20][2], len[2];

void DFS(int p) {
  if(!(~p)) {
    int n[2] = {0};
    for(int i = 0; i < len[0]; i++) {
      n[0] = n[0] * 10 + wei[i][0];
    }
    for(int i = 0; i < len[1]; i++) {
      n[1] = n[1] * 10 + wei[i][1];
    }
    ans = max(ans, n[0] * n[1]);
    return ;
  }
  wei[len[0]++][0] = n[p] - '0';
  DFS(p - 1);
  len[0]--, wei[len[1]++][1] = n[p] - '0';
  DFS(p - 1);
  len[1]--;
}

int main() {
  cin >> n;
  sort(n.begin(), n.end());
  DFS(n.size() - 1);
  cout << ans << '\n';
  return 0;
}
