#include <iostream>
using namespace std;

int main() {
    int D, H, M;
    cin >> D >> H >> M;
    int pivot = 11 * 1440 + 11 * 60 + 11;
    int ans = D * 1440 + H * 60 + M - pivot;
    if (ans >= 0) {
        cout << (D - 11) * 1440 + (H - 11) * 60 + (M - 11);
    } else {
        cout << "-1";
    }
}