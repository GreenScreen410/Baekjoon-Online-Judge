#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> strengthVector;
    vector<string> titleVector;
    string title;
    int strength;
    for (int i = 0; i < N; i++) {
		cin >> title >> strength;
        strengthVector.push_back(strength);
		titleVector.push_back(title);
	}
    
    for(int i = 0; i < M; i++){
        cin >> strength;
        cout << titleVector[lower_bound(strengthVector.begin(), strengthVector.end(), strength) - strengthVector.begin()] << "\n";
    }
    
    return 0;
}