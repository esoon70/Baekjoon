#include <iostream>
using namespace std;

int main() {
    int A, count, stack;
    string test;
    cin >> A;
    for (int i = 0; i < A; i++) {
        cin >> test;
        count = 0;
        stack = 1;
        for (int j = 0; j < test.length(); j++) {
            if (test[j] == 'O') {
                count += stack;
                stack++;
            } else {
                stack = 1;
            }
        }
        cout << count << '\n';
    }
}