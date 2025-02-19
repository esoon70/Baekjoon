#include <iostream>
using namespace std;

int main() {
    int N;
    string A;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        if (A.length() >= 6 && A.length() <= 9) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}