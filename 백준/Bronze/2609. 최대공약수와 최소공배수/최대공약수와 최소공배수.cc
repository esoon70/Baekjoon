#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B;
    for (int i = 1; i <= min(A, B); i++) {
        if (A % i == 0 && B % i == 0) {
            C = i;
        }
    }
    cout << C << '\n';
    cout << A * B / C;
}