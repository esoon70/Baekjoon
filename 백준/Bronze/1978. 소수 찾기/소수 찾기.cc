#include <iostream>
using namespace std;

int main() {
    int A, B;
    int count = 0;
    cin >> A;
    for (int i = 0; i < A; i++) {
        bool check = true;
        cin >> B;
        if (B < 2) {
            continue;
        }
        for (int j = 2; j < B; j++) {
            if (B % j == 0) {
                check = false;
                break;
            }
        }
        if (check) {
            count++;
        }
    }
    cout << count;
}