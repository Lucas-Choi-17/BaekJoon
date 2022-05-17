#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int score[n + 1];
    score[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> score[i];
    }
    int dp[n + 1];
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    dp[3] = max(score[1] + score[3], score[2] + score[3]);
    for (int i = 4; i <= n; ++i) {
        dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
    }
    cout << dp[n] << endl;
    return 0;
}