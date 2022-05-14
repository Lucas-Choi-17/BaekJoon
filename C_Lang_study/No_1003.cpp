#include <iostream>

using namespace std;

int fibo[41][2] = {{1, 0},
                   {0, 1},
};

int main() {
    int T;
    cin >> T;
    int num[T];
    int max = 0;
    for (int i = 0; i < T; ++i) {
        cin >> num[i];
        max = max > num[i] ? max : num[i];
    }
    for (int i = 2; i <= max; ++i) {
        fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
        fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
    }
    for (int i = 0; i < T; ++i) {
        cout << fibo[num[i]][0] << " " << fibo[num[i]][1] << endl;
    }
    return 0;
}