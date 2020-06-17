#include <bits/stdc++.h>

using namespace std;

#define ll long long

void sieveOfEratosthenes(ll n);

int main() {
  sieveOfEratosthenes(150000);
  return 0;
}

void sieveOfEratosthenes(ll n) {
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = false, isPrime[1] = false;

  for (int i = 2; i * i <= n; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  int c = 0;
  for (int i = 2; i < n; ++i) {
    if (isPrime[i]) {
      ++c;
      if (c == 10001)
        cout << i << " ";
    }
  }
}