#include <iostream>
using namespace std;

int main() {
    int A;
    double B;
    cin >> A;
    for (int i = 0; i < A; i++) {
        cin >> B;
        cout.precision(2);
        cout << fixed;
        cout << "$" << B * 0.8 << '\n';
    }
}