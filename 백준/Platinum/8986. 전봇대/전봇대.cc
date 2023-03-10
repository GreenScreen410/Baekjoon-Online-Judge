#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
vector<long long> pole;

long long distance(long long t) {
  long long d = 0;
  for (long long i = 0; i < pole.size(); i++) {
    d += abs(i * t - pole[i]);
  }

  return d;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  pole.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> pole[i];
  }

  long long s = 1;
  long long e = 1e9;
  long long m1 = (s * 2 + e) / 3;
  long long m2 = (s + e * 2) / 3;
  while (e - s >= 3) {
    if (distance(m1) >= distance(m2)) {
      s = m1;
      m1 = (s * 2 + e) / 3;
      m2 = (s + e * 2) / 3;
    } else {
      e = m2;
      m1 = (s * 2 + e) / 3;
      m2 = (s + e * 2) / 3;
    }
  }

  long long mn = 1e18;
  for (int i = s; i <= e; i++) {
    mn = min(distance(i), mn);
  }

  cout << mn;

  return 0;
}
