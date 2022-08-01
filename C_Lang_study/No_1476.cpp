#include <iostream>

using namespace std;

int main() {
    int E, S, M;
    cin >> E >> S >> M;
    // E: 1~15, S: 1~28, M: 1~19
    int e = 1, s = 1, m = 1;
    int year = 0;

    while (true) {
        year++;
        if (((E - year) % 15 == 0 && (S - year) % 28 == 0) && (M - year) % 19 == 0) break;
    }

    cout << year << endl;

    return 0;
}