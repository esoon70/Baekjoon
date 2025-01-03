#include <iostream>
using namespace std;

int main() {
    int K, N, T;
    int bomb = 0;
    char Z;
    cin >> K >> N;
    while (true) {
        cin >> T >> Z;
        bomb += T;
        if (Z == 'T' && bomb < 210) {
            K++;
        }
        if (bomb >= 210) {
            break;
        }
        if (K > 8) {
            K = 1;
        }
    }
    cout << K;
}