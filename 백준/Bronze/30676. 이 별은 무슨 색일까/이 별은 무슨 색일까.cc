#include <iostream>
using namespace std;

int main() {
    int color;
    cin >> color;
    if (color >= 620) {
        cout << "Red";
    } else if (color >= 590) {
        cout << "Orange";
    } else if (color >= 570) {
        cout << "Yellow";
    } else if (color >= 495) {
        cout << "Green";
    } else if (color >= 450) {
        cout << "Blue";
    } else if (color >= 425) {
        cout << "Indigo";
    } else if (color >= 380) {
        cout << "Violet";
    }
}