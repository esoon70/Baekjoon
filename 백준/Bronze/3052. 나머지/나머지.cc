#include <iostream>
using namespace std;

int main() {
    int A;
    int count = 0;
    int Num[42] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> A;
        Num[A % 42] += 1;
    }
    for (int i = 0; i < 42; i++) {
        if (Num[i] != 0) {
            count++;
        }
    }
    cout << count;
}