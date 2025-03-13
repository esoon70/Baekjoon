#include <iostream>
using namespace std;

int main() {
    int A, B, K, X;
    int count = 0;
    cin >> A >> B >> K >> X;
    for (int i = A; i <= B; i++) {
        if (i >= K - X && i <= K + X) {
            count++;
        }
    }
    if (count == 0) {
        cout << "IMPOSSIBLE";
    } else {
        cout << count;
    }
}