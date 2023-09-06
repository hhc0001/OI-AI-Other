#include <bits/stdc++.h>
using namespace std;

const int kMaxN = 100010, kMod = 998244353, kNum = 10;

int dp[kMaxN][kNum], arr[kMaxN], n;

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  dp[0][arr[1]] = 1;
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j < 10; j++) {
      dp[i + 1][(j + arr[i + 2]) % 10] = (dp[i + 1][(j + arr[i + 2]) % 10] + dp[i][j]) % kMod;
      dp[i + 1][(j * arr[i + 2]) % 10] = (dp[i + 1][(j * arr[i + 2]) % 10] + dp[i][j]) % kMod;
    }
  }
  for(int i = 0; i < 10; i++) {
    cout << dp[n - 1][i] << '\n';
  }
  return 0;
}
