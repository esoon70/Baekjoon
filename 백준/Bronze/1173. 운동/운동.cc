#include <iostream>
using namespace std;

int main() {
    int N, m, M, T, R, X;
    int time = 0, n = 0;
    cin >> N >> m >> M >> T >> R;
    X = m;
    if (X + T > M) {
        cout << -1;
        return 0;
    }
    while (true) {
        if (X + T <= M) {
            X += T;            //운동 해서 혈압이 올라감
            n++;
        } else {
            X -= R;            //휴식 해서 혈압이 내려감
            if (X < m) {
                X = m;         //최소 혈압 값 보다 내려갈 수 없음
            }
        }
        time++;
        if (n == N) {
            break;
        }
    }
    cout << time;
}