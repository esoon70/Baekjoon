#include <iostream>
using namespace std;

int main() {
    string A;
    int count = 0;
    while (getline(cin, A)) {
        count++;
    }
    cout << count;
}