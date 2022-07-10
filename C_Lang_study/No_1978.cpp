#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = n;
    int num[n];
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    for (int i = 0; i < n; ++i) {
        if (num[i] == 1) {
            cnt--;
            continue;
        }
        for (int j = 2; j < num[i]; ++j) {
            if (num[i] % j == 0) {
                cnt--;
                break;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}