#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();
void solve();
int isPrime(int);

int main() {
  crap();
  solve();
  return 0;
}

void solve() {
  ll a = 600851475143, b = 2;
  while (a > b) {
    if (a % b == 0) {
      a = a / b;
    } else {
      ++b;
    }
  }
  cout << b;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}