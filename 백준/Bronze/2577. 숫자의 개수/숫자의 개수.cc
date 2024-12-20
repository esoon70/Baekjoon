#include <iostream>
using namespace std;

int main() {
    int A, B, C, count;
    cin >> A >> B >> C;
    string Num = to_string(A * B * C);
    for (int i = 0; i <= 9; i++) {
        count = 0;
        for (int j = 0; j < Num.length(); j++) {
            if (Num[j] - '0' == i) {
                count += 1;
            }
        }
        cout << count << '\n';
    }
}