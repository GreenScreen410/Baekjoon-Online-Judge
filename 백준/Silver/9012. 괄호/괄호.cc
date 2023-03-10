#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		stack<char> bracketStack;
		char bracket[55];
        cin >> bracket;

		for (int j = 0; j < strlen(bracket); j++) {
			if (bracket[j] == '(')
				bracketStack.push(bracket[j]);
			else {
				if (bracketStack.empty()) {
					bracketStack.push(bracket[j]);
				}
				else {
					if (bracketStack.top() == '(') {
						bracketStack.pop();
					}
					else {
						bracketStack.push(bracket[j]);
					}
				}
			}
		}
        
		if (bracketStack.empty()) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}