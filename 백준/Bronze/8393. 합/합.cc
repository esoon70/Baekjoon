#include <iostream>
using namespace std;

int main() {
    int n;
    int stack = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        stack += i;
    }
    cout << stack;
}