#include <iostream>
using namespace std;

int main() {
    string Score;
    double Grade = 0.0;
    cin >> Score;
    switch (Score[0]) {
        case 'A':
            Grade += 4;
            break;
        case 'B':
            Grade += 3;
            break;
        case 'C':
            Grade += 2;
            break;
        case 'D':
            Grade += 1;
            break;
    }
    switch (Score[1]) {
        case '+':
            Grade += 0.3;
            break;
        case '-':
            Grade -= 0.3;
            break;
    }
    cout.precision(1);
    cout << fixed;
    cout << Grade;
}