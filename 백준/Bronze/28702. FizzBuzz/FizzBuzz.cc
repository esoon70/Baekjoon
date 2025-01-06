#include <iostream>
using namespace std;

int main() {
    string A, B, C;
    int D;
    cin >> A >> B >> C;
    for (int i = 0; i < 10; i++) {
        if (A[0] - '0' == i) {
            D = stoi(A) + 3;
        } else if (B[0] - '0' == i) {
            D = stoi(B) + 2;
        } else if (C[0] - '0' == i) {
            D = stoi(C) + 1;
        }
    }
    if (D % 15 == 0) {
        cout << "FizzBuzz";
    } else if (D % 3 == 0) {
        cout << "Fizz";
    } else if (D % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << D;
    }
}