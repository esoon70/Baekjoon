#include <iostream>
using namespace std;

int main() {
    int N, T, P;
    int count;
    int shirt[6] = { 0 };
    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> count;
        shirt[i] = count;
    }
    cin >> T >> P;
    count = 0;
    for (int i = 0; i < 6; i++) {
        if (shirt[i] % T != 0) {
            count += shirt[i] / T + 1;
        } else {
            count += shirt[i] / T;
        }
    }
    cout << count << '\n';
    cout << N / P << " " << N % P;
}