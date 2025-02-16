#include <iostream>
using namespace std;

int main() {
    int A;
    int count = 0;
    cin >> A;
    for (int i = 1; i <= A; i++) {
        for (int j = i + 1; j <= A; j++) {
            for (int k = j + 1; k <= A; k++) {
                if (k < A) {
                    count++;
                }
            }
        }
    }
    cout << count;
}