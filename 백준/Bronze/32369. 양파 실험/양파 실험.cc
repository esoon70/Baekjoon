#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    int OniA = 1;
    int OniB = 1;
    cin >> N >> A >> B;
    for (int i = 0; i < N; i++) {
        OniA += A;
        OniB += B;
        if (OniA < OniB) {
            int change;
            change = OniA;
            OniA = OniB;
            OniB = change;
        } else if (OniA == OniB) {
            OniB -= 1;
        }
    }
    cout << OniA << " " << OniB;
}