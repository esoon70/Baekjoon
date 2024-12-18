#include <iostream>
using namespace std;

int main() {
    int Arr[10000];
    bool A;
    for (int i = 0; i < 28; i++) {
        cin >> Arr[i];
    }
    for (int i = 1; i <= 30; i++) {
        A = false;
        for (int j = 0; j < 28; j++) {
            if (i == Arr[j]) {
                A = true;
            }
        }
        if (A == false) {
            cout << i << '\n';
        }
    }
}