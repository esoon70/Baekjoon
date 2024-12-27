#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, C;
    int count = 0;
    string B;
    cin >> A >> B;
    for (int i = 0; i < B.length(); i++) {
        C = int(B[i]) - 96;
        count += C * pow(31, i);
    }
    cout << count;
}