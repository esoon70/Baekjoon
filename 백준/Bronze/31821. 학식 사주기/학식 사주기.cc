#include <iostream>
using namespace std;

int main() {
    int N, M, B;
    int money = 0;
    cin >> N;
    int A[N] = { 0 };
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> B;
        money += A[B-1];
    }
    cout << money;
}