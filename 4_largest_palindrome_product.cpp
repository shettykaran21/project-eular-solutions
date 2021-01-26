#include <iostream>

using namespace std;

#define ll long long

bool isPalindrome(ll num);

int main() {
  for (int i = 999; i >= 900; i--) {
    for (int j = 999; j >= 900; j--) {
      if (isPalindrome(i * j)) {
        cout << "i = " << i << '\n';
        cout << "j = " << j << '\n';
        cout << i * j;
        return 0;
      }
    }
  }
  return 0;
}

bool isPalindrome(ll num) {
  ll rev = 0;
  ll temp = num;
  while (num != 0) {
    int lastDigit = num % 10;
    rev = rev * 10 + lastDigit;
    num /= 10;
  }
  return rev == temp;
}


