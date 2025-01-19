#include <iostream>
using namespace std;

int main() {
    int n, seven;
    int stack = 0;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        bool nice = false;
        for (int j = 0; j < n; j++) {
            cin >> seven;
            if (seven == 7) {
                nice = true;
            }
        }
        if (nice == true) {
            stack++;
        }
    }
    if (stack == 3) {
        cout << "777";
    } else {
        cout << "0";
    }
}