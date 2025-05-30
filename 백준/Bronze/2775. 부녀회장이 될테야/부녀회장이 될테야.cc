#include <iostream>
using namespace std;

int main() {
    int T, k, n;
    cin >> T;
    int apartment[15][15] = { 0 };
    for (int i = 0; i < 15; i++) {
        apartment[0][i] = i;
        apartment[i][1] = 1;
    }
    for (int i = 1; i < 15; i++) {
        for (int j = 2; j < 15; j++) {
            apartment[i][j] = apartment[i][j - 1] + apartment[i - 1][j];
        }
    }
    for (int i = 0; i < T; i++) {
        cin >> k >> n;
        cout << apartment[k][n] << '\n';
    }
}