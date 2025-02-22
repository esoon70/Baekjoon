#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string A;
        cin >> A;
        int B = A.length() / 2;
        if (A[B] == A[B-1]) {
            cout << "Do-it" << '\n';
        } else {
            cout << "Do-it-Not" << '\n';
        }
    }
}