#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  char bread[10][10];

  int N, M;
  cin >> N >> M;
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < M; ++j)
      cin >> bread[i][j];

  for (int i = 0; i < N; ++i) {
    for (int j = M - 1; j >= 0; --j)
      cout << bread[i][j];
    cout << "\n";
  }

  return 0;
}