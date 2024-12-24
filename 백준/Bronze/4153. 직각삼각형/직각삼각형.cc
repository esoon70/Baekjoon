#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    while (true) {
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0) {
            break;
        }
        if (A > B) {
            swap(A,B);
        }
        if (B > C) {
            swap(B,C);
        }
        if (A * A + B * B == C * C) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
}