#include <iostream>
using mamespace std;

int main() {
  int a,b;
  cin >> a >> b;
  a+=b;
  b=a-b;
  a-=b;
  cout << "a=" << a << endl << "b=" << b;
  return 0;
}
