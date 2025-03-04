#include <iostream>
using namespace std;

int main() {
    int N, C;
    int firework = 0;
    cin >> N >> C;
    int time[C] = { 0 };
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        for (int j = 1; A * j <= C; j++) {
            time[A * j - 1]++;
        }
    }
    for (int i = 0; i < C; i++) {
        if (time[i] != 0) {
            firework++;
        }
    }
    cout << firework;
}