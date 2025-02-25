#include <iostream>
using namespace std;

int main() {
    int n, A;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        A = word.length() - 1;
        if (word[A] == 'a') {
            word += 's';
        } else if (word[A] == 'i' || word[A] == 'y') {
            word[A] = 'i';
            word += "os";
        } else if (word[A] == 'l') {
            word += "es";
        } else if (word[A] == 'n') {
            word[A] = 'a';
            word += "nes";
        } else if ((word[A-1] == 'n' && word[A] == 'e')) {
            word[A-1] = 'a';
            word[A] = 'n';
            word += "es";
        } else if (word[A] == 'o') {
            word += 's';
        } else if (word[A] == 'r') {
            word += "es";
        } else if (word[A] == 't') {
            word += "as";
        } else if (word[A] == 'u') {
            word += 's';
        } else if (word[A] == 'v') {
            word += "es";
        } else if (word[A] == 'w') {
            word += "as";
        } else {
            word += "us";
        }
        cout << word << '\n';
    }
}