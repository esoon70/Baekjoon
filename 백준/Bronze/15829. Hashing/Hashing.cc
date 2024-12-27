#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, C;
    long long count = 0;
    long long M = 1234567891;
    long long r = 1;
    string B;
    cin >> A >> B;
    for (int i = 0; i < B.length(); i++) {
        C = int(B[i]) - 96;
        count = (count + C * r) % M;
        r = r * 31 % M;
    }
    cout << count;
}