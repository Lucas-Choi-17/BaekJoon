#include <iostream>

using namespace std;

double K[10010];

int main() {
    int n;
    cin >> n;
    int negative = 0;
    for (int i = 0; i < n; ++i) {
        cin >> K[i];
        if (K[i] < 0) negative++;
    }

    int cnt = 0;
    int index = 0;
    while (negative) {
        if (K[index] < 0) {
            cnt++;
            K[index] *= -1;
            negative--;
            K[(index + 1) % n] -= K[index];
            if (K[(index + 1) % n] + K[index] >= 0 && K[(index + 1) % n] < 0) negative++;
            K[(index - 1 + n) % n] -= K[index];
            if (K[(index - 1 + n) % n] + K[index] >= 0 && K[(index - 1 + n) % n] < 0) negative++;
        }
        index = (index + 1) % n;
    }
    cout << cnt << endl;
    return 0;
}