#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    int A[N] = { 0 };
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    cout << A[N-k];
}