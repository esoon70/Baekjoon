#include <iostream>
using namespace std;

int main() {
    int N , M, Num;
    cin >> N >> M;
    int Arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Num;
            Arr[i][j] += Num;
            cout << Arr[i][j] << " ";
        }
        cout << '\n';
    }
}