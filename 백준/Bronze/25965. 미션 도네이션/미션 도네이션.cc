#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        long long check[101][3] = { 0 };
        long long k = 0, d = 0, a = 0;
        long long money = 0, price = 0;;
        cin >> M;
        for (int j = 0; j < M; j++) {
            cin >> check[j][0] >> check[j][1] >> check[j][2];
        }
        cin >> k >> d >> a;
        for (int j = 0; j < M; j++) {
            money = check[j][0] * k - check[j][1] * d + check[j][2] * a;
            if (money < 0) {
                money = 0;
            }
            price += money;
        }
        cout << price << '\n';
    }
}