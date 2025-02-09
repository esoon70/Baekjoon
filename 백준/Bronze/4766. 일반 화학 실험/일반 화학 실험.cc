#include <iostream>
using namespace std;

int main() {
    float A, B;
    cin >> A;
    while (true) {
        cin >> B;
        if (B == 999) {
            break;
        }
        cout.precision(2);
        cout << fixed;
        cout << B - A << '\n';
        A = B;
    }
}