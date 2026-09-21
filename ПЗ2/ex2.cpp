#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long fact = 1;
  long f = 1;
  for (int i = 1; i <= n; i++) {
    fact=fact*i;
    f=f*fact;
  }
  cout << f;
  return 0;
}
