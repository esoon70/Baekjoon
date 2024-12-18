#include <iostream>
using namespace std;

int main() {
    int Num = 1;
    int fac;
    cin >> fac;
    for (int i = 1; i <= fac; i++) {
        Num *= i;
    }
    cout << Num;
}