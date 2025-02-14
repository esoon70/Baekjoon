#include <iostream>
using namespace std;

int main() {
    int Score[5] = { 0 };
    int A = 0;
    for (int i = 0; i < 5; i++) {
        cin >> Score[i];
        if (Score[i] < 40) {
            Score[i] = 40;
        }
        A += Score[i];
    }
    cout << A / 5;
}