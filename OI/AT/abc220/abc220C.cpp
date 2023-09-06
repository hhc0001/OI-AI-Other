#include <bits/stdc++.h>
using namespace std;

int n;
long long arr[100010], x, sum, ans;

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  cin >> x;
  ans = (x / sum) * n + 1, x %= sum;
  for(int i = 1; i <= n; i++, ans++) {
    if(arr[i] > x) {
      cout << ans << '\n';
      return 0;
    }
    x -= arr[i];
  }
  return 0;
}
