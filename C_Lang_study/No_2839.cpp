#include <iostream>

using namespace std;

int five = 0;
int three = 0;

void countBag(int N) {
    if (N == 0) return;
    else if (N < 3) {
        three = -1;
        five = -1;
        return;
    } else {
        if (N % 5 == 0) {
            five += N / 5;
        } else if (N % 3 == 0) {
            three++;
            countBag(N - 3);
        } else {
            three++;
            countBag(N - 3);
        }
    }
}

int main() {
    int N;
    cin >> N;
    countBag(N);
    if (five == -1 & three == -1) {
        cout << -1 << endl;
    } else {
        cout << five + three << endl;
    }
    return 0;
}