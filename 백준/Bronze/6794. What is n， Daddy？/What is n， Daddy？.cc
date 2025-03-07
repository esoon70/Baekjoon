#include <iostream>
using namespace std;

int main() {
    int A;
    int count = 0;
    cin >> A;
    for (int i = 0; i <= A / 2; i++) {
        if (A - i <= 5) {
            count++;
        }
    }
    cout << count;
}