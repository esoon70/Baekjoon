#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 
    cout << "Gnomes:" << '\n';
    for (int i = 0; i < N; i++) {
        bool order = false;
        int A[3] = { 0 };
        for (int j = 0; j < 3; j++) {
            cin >> A[j];
        }
        if ((A[0] < A[1] && A[1] < A[2]) || (A[0] > A[1] && A[1] > A[2])) {
            order = true;
        }
        if (order) {
            cout << "Ordered" << '\n';
        } else {
            cout << "Unordered" << '\n';
        }
    }
}