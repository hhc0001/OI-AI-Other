#include <bits/stdc++.h>
using namespace std;

int n, a[100010];

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  /*
  if(a[h]<a[h1]){//三个判断，比较简单，自己理解
		a[h1]-=a[h];h++;continue;
	}
	if(a[h]>a[h1]){
		a[h]-=a[h1];h1--;continue;
	}
	if(a[h]==a[h1]){
		h++;h1--;continue;
	}
  */
 int l = 1, r = n;
  for(; l + 1 < r; ) {
    if(a[l] < a[r]) {
      a[r] -= a[l];
      l++;
    }
    else {
      if(a[l] > a[r]) {
        a[l] -= a[r];
        r--;
      }
      else {
        l++, r--;
      }
    }
  }
  cout << l << ' ' << n - l << '\n';
  return 0;
}
