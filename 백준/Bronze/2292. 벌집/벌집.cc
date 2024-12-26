#include <iostream>
using namespace std;

int main() {
    int A;
    int stack = 6;
    int jump = 6;
    int count = 2;
    cin >> A;
    if (A == 1) {
        cout << A;
    } else {
        while(stack < A - 1) {
            jump += 6;
            stack += jump;
            count++;
        }
        cout << count;
    }
}