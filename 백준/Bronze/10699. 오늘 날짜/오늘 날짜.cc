#include <iostream>
#include <ctime>
using namespace std;

int main() {
    struct tm *t;
    time_t timer;
    timer = time(NULL);
    t = localtime(&timer);
    cout << t->tm_year + 1900 << "-";
    cout << t->tm_mon + 1 << "-";
    cout << t->tm_mday;
}