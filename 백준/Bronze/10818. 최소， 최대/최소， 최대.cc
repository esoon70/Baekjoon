#include <iostream>
using namespace std;

int main() {
    int N, A;
    int min = 1000001;
    int max = -1000001;
    cin >> N;
    int num[N];
    for (int i = 0; i < N; i++) {
        cin >> A;
        num[i] = A;
    }
    for (int i = 0; i < N; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }
    cout << min << " " << max;
}