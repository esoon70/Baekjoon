#include <iostream>
using namespace std;

int main() {
    int Num, A, B;
    cin >> Num;
    for (int i = 0; i < Num; i++) {
        cin >> A >> B;
        cout << A + B << '\n';
    }
}