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

void solve() {
  int a = 1, b = 2;
  int c = a + b;
  ll sum = 2;
  while (c < 4000000) {
    a = b;
    b = c;
    c = a + b;
    if (c % 2 == 0) {
      sum += c;
    }
  }

  deb(sum);
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}