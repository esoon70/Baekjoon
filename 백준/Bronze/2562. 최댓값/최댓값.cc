#include <iostream>
using namespace std;

int main() {
    int Num[9];
    int A, B = 1;
    for (int i = 0; i < 9; i++) {
        cin >> A;
        Num[i] = A;
    }
    A = Num[0];
    for (int i = 1; i < 9; i++) {
        if (A < Num[i]) {
            A = Num[i];
            B = i + 1;
        }
    }
    cout << A << '\n' << B;
}