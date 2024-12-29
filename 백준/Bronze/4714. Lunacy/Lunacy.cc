#include <iostream>
using namespace std;

int main() {
    float A;
    cout << fixed;
    cout.precision(2);
    while (true) {
        cin >> A;
        if (A == -1.0) {
            break;
        }
        cout << "Objects weighing " << A << " on Earth will weigh " << A * 0.167 << " on the moon." << '\n';
    }
}