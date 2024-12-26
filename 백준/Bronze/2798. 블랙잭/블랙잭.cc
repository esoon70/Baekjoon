#include <iostream>
using namespace std;

int main() {
    int N, M, A;
    int countcard;
    int maxcard = 0;
    cin >> N >> M;
    int card[N] = { 0 };
    for (int i = 0; i < N; i++) {
        cin >> A;
        card[i] = A;
    }
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                countcard = card[i] + card[j] + card[k];
                if (countcard <= M && maxcard < countcard) {
                    maxcard = countcard;
                }
            }
        }
    }
    cout << maxcard;
}