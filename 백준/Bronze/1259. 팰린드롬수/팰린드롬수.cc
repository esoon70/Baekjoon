#include <iostream>
using namespace std;

int main() {
    string A;
    while (true) {
        cin >> A;
        bool check = true;
        if (A == "0") {
            break;
        }
        for (int i = 0; i < A.length(); i++) {
            if (A[i] != A[A.length()-1-i]) {
                check = false;
            }
        }
        if (check) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}