#include <iostream>
using namespace std;

int main() {
    int N, plus = 0;
    string A;
    cin >> N >> A;
    for (int i = 0; i < N; i++) {
        plus += A[i] - 48;
    }
    cout << plus;
}