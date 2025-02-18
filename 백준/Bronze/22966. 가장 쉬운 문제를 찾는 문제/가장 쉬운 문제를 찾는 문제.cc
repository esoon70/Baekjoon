#include <iostream>
#include <algorithm>
using namespace std;

struct Member {
    string name;
    int difficult;
};

bool difficulty(Member a, Member b) {
    return a.difficult < b.difficult;
}

int main() { 
    int count;
    cin >> count;
    Member problem[count];
    for (int i = 0; i < count; i++) {
        cin >> problem[i].name >> problem[i].difficult;
    }
    sort(problem, problem + count, difficulty);
    cout << problem[0].name;
}