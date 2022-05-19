#include <iostream>

using namespace std;

int dp[1001];

int main() {
    int n;
    cin >> n;
    int num[n];
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    for (int i = 0; i < n; ++i) {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; --j) {
            if (num[i] > num[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}