#include <iostream>
using namespace std;

int main() {
    string S;
    int Alphabet[26];
    int count;
    cin >> S;
    fill(Alphabet, Alphabet + 26, -1);
    for (int i = 0; i < S.length(); i++) {
        count = S[i] - 97;
        if (Alphabet[count] == -1) {
            Alphabet[count] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << Alphabet[i] << " ";
    }
}