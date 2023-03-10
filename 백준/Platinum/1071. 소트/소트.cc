#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    // 배열 저장하기
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	int count = 0;
	for (int i = 0; i < N-1; i++) {
	    // 같은 값이 발견된다면
		if (v[i+1] == v[i] + 1) {
		    // v[i]+2의 위치를 locate에 저장
			auto locate = lower_bound(v.begin(), v.end(), v[i]+2);
			
			// 그런데 locate가 배열의 끝이라면
			if (locate != v.end()) {
			    // 그냥 v[1+1]과 자리 바꾸기
			    swap(*locate, v[i+1]);
			}
			else {
				auto ub = upper_bound(v.begin()+i+1, v.end(), v[i]);
				auto lb = lower_bound(v.begin()+i-count, v.end(), v[i]);
				while (ub != v.end()) {
					swap(*lb, *ub);
					lb++; ub++;
				}
			}
			count = 0;
		}
		
		else if (v[i+1] == v[i]) {
		    count++;
		}
	}
	
	// 배열 출력하기
	for (int i = 0; i < N; i++) {
	    cout << v[i] << " ";
	}

    return 0;
}