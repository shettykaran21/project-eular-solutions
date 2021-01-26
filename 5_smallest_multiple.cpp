#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();
void solve();

int main() {
  crap();
  solve();
  return 0;
}

bool isDivisible(int num) {
  for (int i = 2; i <= 20; ++i) {
    if (num % i != 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  ll num = 2540;
  while (true) {
    if (isDivisible(num)) {
      break;
    }
    num += 20;
  }
  cout << num;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}