#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.141592

int main() {
    double a, b;
    cout << fixed;
    cout.precision(10);
    cin >> a;
    cout << sqrt(a / PI) * 2 * PI;
}