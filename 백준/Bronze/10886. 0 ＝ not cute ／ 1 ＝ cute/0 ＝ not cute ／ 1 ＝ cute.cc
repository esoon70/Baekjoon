#include <iostream>
using namespace std;

int main() {
    int N;
    int A = 0, B = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int opinion;
        cin >> opinion;
        if (opinion == 0) {
            A++;
        } else {
            B++;
        }
    }
    if (A > B) {
        cout << "Junhee is not cute!";
    } else {
        cout << "Junhee is cute!";
    }
}