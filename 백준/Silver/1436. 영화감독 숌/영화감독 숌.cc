#include <iostream>
using namespace std;

int main() {
    int N;
    int scary = 666;
    int stack = 0;
    string world;
    cin >> N;
    while (true) {
        world = to_string(scary);
        for (int i = 0; i < world.length(); i++) {
            if (world[i] == '6' && world[i+1] == '6' && world[i+2] == '6') {
                stack++;
                break;
            }
        }
        if (stack == N) {
            break;
        }
        scary++;
    }
    cout << scary;
}