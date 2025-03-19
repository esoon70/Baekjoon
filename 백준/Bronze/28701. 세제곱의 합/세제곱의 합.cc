#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    int count = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        count += i;
    }
    cout << count << '\n';
    cout << (int)pow(count, 2) << '\n';
    count = 0;
    for (int i = 1; i <= N; i++) {
        count += pow(i, 3);
    }
    cout << count;
}