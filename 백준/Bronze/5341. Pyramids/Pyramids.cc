#include <iostream>
using namespace std;

int main() {
    int A;
    while (cin >> A) {
        int count = 0;
        if (A == 0) {
            break;
        }
        for (int i = A; i > 0; i--) {
            count += i;
        }
        cout << count << '\n';
    }
}