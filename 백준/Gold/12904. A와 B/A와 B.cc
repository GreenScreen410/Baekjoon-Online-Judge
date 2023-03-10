#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
	cin >> S;
	
	string T;
	cin >> T;

    int result = 0;
	while (1) {
	    if (S.size() == T.size()) {
		    if (S == T) result = 1;
		    break;
	    }
		
		if (T[T.size()-1] == 'A') {
		    T.pop_back();
		}
		else {
			T.pop_back();
			reverse(T.begin(), T.end());
		}
	}
	
	cout << result;
}