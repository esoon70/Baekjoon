#include <iostream>
using namespace std;

int main() {
    int A;
    int asc = 0;
    int des = 0;
    int music[8];
    for (int i = 0; i < 8; i++) {
        cin >> A;
        music[i] = A;
        if (music[i] == i + 1) {
            asc++;
        } else if (music[i] == 8 - i) {
            des++;
        }
    }
    if (asc == 8) {
        cout << "ascending";
    } else if (des == 8) {
        cout << "descending";
    } else {
        cout << "mixed";
    }
}