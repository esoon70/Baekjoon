#include <iostream>
using namespace std;

int main() {
    int N, A;
    int Hmoney = 0;
    int money = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int count[7] = {0};
        for (int j = 0; j < 4; j++) {
            cin >> A;
            count[A]++;
        }
        for (int j = 1; j < 7; j++) {
            if (count[j] == 4) {
                money = 50000 + j * 5000;
                break;
            } else if (count[j] == 3) {
                money = 10000 + j * 1000;
                break;
            } else if (count[j] == 2) {
                for (int k = j + 1; k < 7; k++) {
                    if (count[k] == 2) {
                        money = 2000 + j * 500 + k * 500;
                        break;
                    } else {
                        money = 1000 + j * 100;
                    }
                }
                break;
            } else if (count[j] == 1) {
                money = j * 100;
            }
        }
        if (Hmoney < money) {
            Hmoney = money;
        }
    }
    cout << Hmoney;
}