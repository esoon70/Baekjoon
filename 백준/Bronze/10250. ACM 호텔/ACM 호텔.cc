#include <iostream>
using namespace std;

int main() {
    int T, H, W, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        // H = 층의 개수, W = 방의 개수, N = N번째 손님
        if (N % H == 0) {
            cout << H * 100 + N / H << '\n';
        } else {
            cout << N % H * 100 + N / H + 1 << '\n';
        }
    }
}