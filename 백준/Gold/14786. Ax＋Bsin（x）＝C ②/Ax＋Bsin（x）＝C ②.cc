#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  double s = 0;
  double e = 100000;
  double m = (s + e) / 2;
  while (fabs(A * m + B * sin(m) - C) > 2e-9) {
    if (A * m + B * sin(m) - C < 0) {
      s = m;
      m = (s + e) / 2;
    } else {
      e = m;
      m = (s + e) / 2;
    }
  }

  printf("%.20lf", m);

  return 0;
}
