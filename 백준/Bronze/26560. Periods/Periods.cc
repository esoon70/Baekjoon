#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    cin.ignore();
    for (int i = 0; i < A; i++) {
        string talk;
        getline(cin, talk);
        if (talk[talk.length() - 1] != '.') {
            talk += '.';
        }
        cout << talk <<'\n';
    }
}