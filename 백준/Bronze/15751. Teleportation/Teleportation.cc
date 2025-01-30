#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[4] = { 0 };
    for (int i = 0; i < 4; i++) {
        cin >> A[i];
    }
    int walk = abs(A[1] - A[0]);
    sort(A, A + 4);
    int teleport = (A[3] - A[2]) + (A[1] - A[0]);
    cout << min(teleport, walk);
}