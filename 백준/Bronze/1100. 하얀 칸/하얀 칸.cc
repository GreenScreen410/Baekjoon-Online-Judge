#include <iostream>
using namespace std;

int main() {
    char chess[8][8] = { 0, };
    int count = 0;
    
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
		    cin >> chess[i][j];
        }
	}
    
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(chess[i][j] == 'F' && (i + j) % 2 == 0){ 
				count++;
			}
		}
	}
    
    cout << count;
	
    return 0;
}