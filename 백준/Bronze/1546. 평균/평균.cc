#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int score[N];
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }
    float M = *max_element(score, score + N);
    float average = 0;
    for (int i = 0; i < N; i++) {
        average += score[i] / M * 100;
    }
    cout << average / N;
}