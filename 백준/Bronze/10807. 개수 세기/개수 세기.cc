#include <iostream>
using namespace std;

int main() {
    int N, Num, v;
    int count = 0;
    int Arr[10000];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }
    cin >> v;
    for (int i = 0; i < N; i++) {
        if (Arr[i] == v) {
            count++;
        }
    }
    cout << count;
}