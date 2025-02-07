#include <iostream>
using namespace std;

int main() {
    int K, M;
    cin >> K >> M;
    if (K % M == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}