#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int count = 0;
    int stat = 0;
    int level[5] = {60, 100, 140, 200, 250};
    cin >> N;
    int maple[N] = { 0 };
    for (int i = 0; i < N; i++) {
        cin >> maple[i];
    }
    sort(maple, maple + N, greater<>());
    if (N > 42) {
        N = 42;
    }
    for (int i = 0; i < N; i++) {
        count += maple[i];
        for (int j = 0; j < 5; j++) {
            if (maple[i] >= level[j]) {
                stat++;
            }
        }
    }
    cout << count << " " << stat;
}