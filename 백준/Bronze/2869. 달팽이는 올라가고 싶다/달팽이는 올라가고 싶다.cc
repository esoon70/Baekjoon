#include <iostream>
using namespace std;

int main() {
    int V, A, B;
    cin >> A >> B >> V;
    if ((V - B) % (A - B) == 0) {
        cout << (V - B) / (A - B);
    } else {
        cout << (V - B) / (A - B) + 1;
    }
}