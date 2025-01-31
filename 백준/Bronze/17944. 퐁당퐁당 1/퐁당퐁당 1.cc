#include <iostream>
using namespace std;

int main() {
    int N, T;
    int hands = 0;
    int stack = 1;
    cin >> N >> T;
    for (int i = 1; i <= T; i++) {
        if (hands == 1) {
            stack = 1;
        }
        if (hands == N * 2) {
            stack = -1;
        }
        hands += stack;
    }
    cout << hands;
}