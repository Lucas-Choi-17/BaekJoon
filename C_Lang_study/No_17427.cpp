#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    long total = 0;

    for (int i = 1; i <= N; ++i) {
        total += (N / i) * i;
    }

    cout << total << endl;
    return 0;
}