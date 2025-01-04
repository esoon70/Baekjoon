#include <iostream>
using namespace std;

int main() {
    long long K, N;
    long long X = 0;
    long money = -1;
    cin >> K >> N;
    while (true) {
        X++;
        if (N <= 1) {
            break;
        }
        if ((X -  K) * N >= X) {
            money = X;
            break;
        }
    }
    cout << money;
}