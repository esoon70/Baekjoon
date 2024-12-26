#include <iostream>
using namespace std;

int main() {
    int A;
    bool found = true;
    cin >> A;
    for (int i = 1; i < A; i++) {
        int check = 0;
        string B = to_string(i);
        for (int j = 0; j < B.length(); j++) {
            check += B[j] - '0';
        }
        if (i + check == A) {
            cout << i;
            found = false;
            break;
        } 
    }
    if (found)
    cout << "0";
}