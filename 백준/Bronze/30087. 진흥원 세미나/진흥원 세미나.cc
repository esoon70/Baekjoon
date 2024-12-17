#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        string semina;
        cin >> semina;

        if (semina == "Algorithm") {
            cout << "204\n";
        } else if (semina == "DataAnalysis") {
            cout << "207\n";
        } else if (semina == "ArtificialIntelligence") {
            cout << "302\n";
        } else if (semina == "CyberSecurity") {
            cout << "B101\n";
        } else if (semina == "Network") {
            cout << "303\n";
        } else if (semina == "Startup") {
            cout << "501\n";
        } else if (semina == "TestStrategy") {
            cout << "105\n";
        }
    }
}
