#include <iostream>
using namespace std;

int main() {
    int Star;
    cin >> Star;
    for (int i = 1; i <= Star; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}