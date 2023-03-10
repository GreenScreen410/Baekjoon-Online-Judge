#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int N;
  cin >> N;
  
  vector<pair<int, int>> v;
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({ b, a });
  }
  sort(v.begin(), v.end());

  int now = 0;
  int room = 0;
  for (int i = 0; i < N; i++) {
    if (now > v[i].second) continue;
    now = v[i].first;
    room++;
  }

  cout << room;
  
  return 0;
}