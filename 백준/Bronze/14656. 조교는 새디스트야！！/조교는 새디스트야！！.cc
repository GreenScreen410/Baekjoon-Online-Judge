#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;

    vector<int> students;
    for (int i = 0; i < N; i++) {
      int student;
      cin >> student;
      students.push_back(student);
    }
    
    int count = 0;
    for (int i = 1; i <= students.size(); i++) {
        if (students[i-1] != i) count++;
    }
    
    cout << count;

    return 0;
}