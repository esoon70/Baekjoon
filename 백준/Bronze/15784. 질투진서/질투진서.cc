#include <iostream>
using namespace std;

int main() {
    int N, a, b;
    bool happy = true;
    cin >> N >> a >> b;
    int chair[N][N] = { 0 };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> chair[i][j];
        }
    }
    a--;
    b--;
    for (int i = 0; i < N; i++) {
        if (chair[a][b] < chair[a][i] || chair[a][b] < chair[i][b]) {
            happy = false;
        }
    }
    if (happy) {
        cout << "HAPPY";
    } else {
        cout << "ANGRY";
    }
}