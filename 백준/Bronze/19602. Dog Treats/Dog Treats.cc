#include <iostream>
using namespace std;

int main() {
    int S, M, L;
    cin >> S >> M >> L;
    if (S * 1 + M * 2 + L * 3 >= 10) {
        cout << "happy";
    } else {
        cout << "sad";
    }
}