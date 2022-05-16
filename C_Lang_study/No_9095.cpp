#include <iostream>

using namespace std;

int cnt[12] = {0, 1, 2, 4,};

int main() {
    int T;
    cin >> T;
    int num[T];
    int max = 0;
    for (int i = 0; i < T; ++i) {
        cin >> num[i];
        max = max > num[i] ? max : num[i];
    }

    for (int i = 4; i <= max; ++i) {
        cnt[i] = cnt[i - 1] + cnt[i - 2] + cnt[i - 3];
    }

    for (int i = 0; i < T; ++i) {
        cout << cnt[num[i]] << endl;
    }
    return 0;
}