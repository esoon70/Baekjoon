#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << (int)(N * 0.78) << '\n';
    cout << (int)(N * 0.8 + N * 0.2 * 0.78);
}