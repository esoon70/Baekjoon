#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int weight[3] = { 0 };
    for (int i = 0; i < 3; i++) {
        cin >> weight[i];
    }
    sort(weight, weight + 3);
    cout << weight[1];
}