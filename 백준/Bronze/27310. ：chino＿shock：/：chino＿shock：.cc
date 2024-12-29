#include <iostream>
using namespace std;

int main() {
    string chino;
    cin >> chino;
    int count = chino.length();
    for (int i = 0; i < chino.length(); i++) {
        if (chino[i] == ':') {
            count++;
        } else if (chino[i] == '_') {
            count += 5;
        }
    }
    cout << count;
}