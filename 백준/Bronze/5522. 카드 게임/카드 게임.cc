#include <iostream>
using namespace std;

int main() {
    int A;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        cin >> A;
        count += A;
    }
    cout << count;
}