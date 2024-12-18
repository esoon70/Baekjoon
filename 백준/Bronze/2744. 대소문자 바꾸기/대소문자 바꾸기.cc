#include <iostream>
using namespace std;

int main() {
    string X;
    cin >> X;
    for (int i = 0; i < X.length(); i++) {
        if (X[i] <= 90) {
            X[i] += 32;
        } else {
            X[i] -= 32;
        }
    }
    cout << X;
}