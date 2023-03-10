#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> FBI;
    int position = 0;
    
    for (int i = 0; i < 5; i++) {
        string agent;
        getline(cin, agent);
        position++;
        
        if (agent.find("FBI") != string::npos) {
            FBI.push_back(position);
        }
    }
    
    if (FBI.empty()) cout << "HE GOT AWAY!";
    
    for (int i = 0; i < FBI.size(); i++) {
        cout << FBI[i] << " ";
    }

    return 0;
}