#include <iostream>
using namespace std;

int main() {
    int A, B ,C, D, P;
    int X, Y;
    cin >> A >> B >> C >> D >> P;
    if (P > C) {
        X = B;
        X += (P - C) * D;
    } else {
        X = B;
    }
    Y = A * P;
    cout << min(X, Y);
}