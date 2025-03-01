#include <iostream>
using namespace std;

int main() {
    int A[5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    for (int i = 1; i < 5; i++) {
        if (A[0] - A[i] <= 1000) {
            count++;
        }
    }
    cout << count;
}