#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int Arr[10000];
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }
    for (int i = 0; i < N; i++) {
        if (Arr[i] < X) {
            cout << Arr[i] << " ";
        }
    }
}