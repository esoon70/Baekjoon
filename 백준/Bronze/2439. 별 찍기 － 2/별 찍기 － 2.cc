#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    for (int i = 1; i <= A; i++) {
        for (int j = A; j > i; j--) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << '\n';
    }
}