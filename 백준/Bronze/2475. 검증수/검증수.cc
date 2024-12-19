#include <iostream>
using namespace std;

int main() {
    int A;
    int Num = 0;
    for (int i = 0; i < 5; i++) {
        cin >> A;
        Num += A * A;
    }
    cout << Num % 10; 
}