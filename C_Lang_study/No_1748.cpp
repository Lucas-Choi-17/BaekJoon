#include <iostream>

using namespace std;

int main() {
    double N;
    cin >> N;
    int flag = 10;
    int cnt = 0;
    int cur_t = 1;
    for (int i = 1; i <= N; ++i) {
        if (i == flag) {
            flag *= 10;
            cur_t++;
        }
        cnt += cur_t;
    }
    cout << cnt << "\n";
}