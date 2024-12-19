#include <iostream>
using namespace std;

int main() {
    int T, R;
    string Text;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R >> Text;
        for (int j = 0; j < Text.length(); j++) {
            for (int k = 0; k < R; k++) {
                cout << Text[j];
            }
        }
        cout << '\n';
    }
}