#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int Num, A, B;
    cin >> Num;
    for (int i = 1; i <= Num; i++) {
        cin >> A >> B;
        cout << A + B << '\n';
    }
}