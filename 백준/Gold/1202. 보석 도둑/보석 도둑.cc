#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, K;
  cin >> N >> K;

  vector<pair<int, int>> jewel;
  for (int i = 0; i < N; i++) {
    int M, V;
    cin >> M >> V;
    jewel.push_back({M, V});
  }

  vector<int> bag;
  for (int i = 0; i < K; i++) {
    int C;
    cin >> C;
    bag.push_back(C);
  }

  sort(jewel.begin(), jewel.end());
  sort(bag.begin(), bag.end());

  int now = 0;
  long long answer = 0;
  priority_queue<int> pq;
  for (int i = 0; i < K; i++) {
    while (now < N && jewel[now].first <= bag[i]) {
      pq.push(jewel[now++].second);
    }
    if (!pq.empty()) {
      answer += pq.top();
      pq.pop();
    }
  }

  cout << answer;

  return 0;
}