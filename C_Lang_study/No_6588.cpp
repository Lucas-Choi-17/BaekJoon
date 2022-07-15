#include <iostream>

using namespace std;

bool sosu[500000];

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    sosu[0] = true;
    for (int i = 1; i < 500000; ++i) {
        if (!sosu[i]) {
            for (int j = 3; (i * 2 + 1) * j < 1000000; j += 2) {
                sosu[((i * 2 + 1) * j - 1) / 2] = true;
            }
        }
    }

    // goldbach
    long long cnt = 0;
    long long a, b;
    while (true) {
        int n;
        cin >> n;
        cnt++;
        if (n == 0 || cnt == 1000000)break;
        a = 0;
        for (int i = 3; i < n / 2 + 1; i += 2) {
            if (!sosu[(i - 1) / 2] && !sosu[(n - i - 1) / 2]) {
                a = i;
                b = n - i;
                break;
            }
        }
        if (a) {
            cout << n << " = " << a << " + " << b << "\n";
        } else {
            cout << "Goldbach's conjecture is wrong." << "\n";
        }

    }

    return 0;
}