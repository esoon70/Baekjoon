#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    int N[5] = { 0 };
    cin >> T;
    for (int i = 0; i < T; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            cin >> N[j];
            count += N[j];
        }
        sort(N, N + 5);
        if (abs(N[1] - N[3]) >= 4) {
            cout << "KIN" << '\n';
        } else {
            cout << N[1] + N[2] + N[3] << '\n';
        }
    }
}