#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    A += D;
    C += B;
    if (A > C) {
        cout << "Persepolis";
    } else if (A < C) {
        cout << "Esteghlal";
    } else {
        if (B > D) {
            cout << "Esteghlal";
        } else if (B < D) {
            cout << "Persepolis";
        } else {
            cout << "Penalty";
        }
    }
}