#include <iostream>
using namespace std;

int main() {
    int T;
    string Text;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> Text;
        cout << Text[0] << Text[Text.length() - 1] << '\n';
    }
}