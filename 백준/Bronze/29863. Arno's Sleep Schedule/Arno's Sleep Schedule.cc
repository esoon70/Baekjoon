#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A > B) {
        cout << 24 - A + B;
    } else {
        cout << B - A;
    }
}