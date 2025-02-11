#include <iostream>
#include <algorithm>
using namespace std;

struct Member {
    int A;
    int B;
    string name;
};

bool compareByYear(Member a, Member b) {
    return a.B < b.B;
}

bool compareByProblems(Member a, Member b) {
    return a.A > b.A;
}

int main() { 
    Member members[3];
    for (int i = 0; i < 3; i++) {
        cin >> members[i].A >> members[i].B >> members[i].name;
    }
    sort(members, members + 3, compareByYear);
    for (int i = 0; i < 3; i++) {
        cout << members[i].B % 100;
    }
    cout << '\n';
    sort(members, members + 3, compareByProblems);
    for (int i = 0; i < 3; i++) {
        cout << members[i].name[0];
    }
}