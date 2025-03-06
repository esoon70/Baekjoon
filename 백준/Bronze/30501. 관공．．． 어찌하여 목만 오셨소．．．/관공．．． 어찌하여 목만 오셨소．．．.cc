#include <iostream>
using namespace std;

int main() {
    int N;
    string A;
    cin >> N;
    for (int i = 0; i < N; i++) {
        bool criminal = false;
        cin >> A;
        for (int j = 0; j < A.length(); j++) {
            if (A[j] == 'S') {
                criminal = true;
            }
        }
        if (criminal == true) {
            cout << A << '\n';
        }
    }
}