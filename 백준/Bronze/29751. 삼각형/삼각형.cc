#include <iostream>
using namespace std;

int main() {
    float W, H;
    cin >> W >> H;
    cout.precision(1);
    cout << fixed;
    cout << W * H / 2;
}