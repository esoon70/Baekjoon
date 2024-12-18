#include <iostream>
using namespace std;

int main() {
    int Num;
    cin >> Num;
    for (int i = 1; i <= 9; i++) {
        cout << Num << " * " << i << " = " << Num * i << '\n';
    }
}