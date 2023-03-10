#include <iostream>
using namespace std;
int tree[26][2];

void preOrder(int now) {
    if (now == '.') return;
    
    cout << (char)now;
    preOrder(tree[now - 'A'][0]);
    preOrder(tree[now - 'A'][1]);
}

void inOrder(int now) {
    if (now == '.') return;
    
    inOrder(tree[now - 'A'][0]);
    cout << (char)now;
    inOrder(tree[now - 'A'][1]);
}

void postOrder(int now) {
    if (now == '.') return;
    
    postOrder(tree[now - 'A'][0]);
    postOrder(tree[now - 'A'][1]);
    cout << (char)now;
}

int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char parent, left, right;
        cin >> parent >> left >> right;
        
        // 루트의 자식 지정
        tree[parent - 'A'][0] = left;
        tree[parent - 'A'][1] = right;
    }
    
    preOrder('A');
    cout << "\n";
    inOrder('A');
    cout << "\n";
    postOrder('A');
    
    return 0;
}