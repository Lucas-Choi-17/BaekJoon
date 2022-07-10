#include <iostream>

using namespace std;

long long dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    dp[0] = 0;
    for (int i = 1; i <= 1000000; i++) {
        for (int j = 1; j * i <= 1000000; j++) {
            dp[j * i] += i;
        }
        dp[i] += dp[i - 1];
    }
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}