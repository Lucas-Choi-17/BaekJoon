#include <iostream>

using namespace std;

int block[1002] = {0, 1, 2,};

int count(int n) {
    return (block[n - 1] + block[n - 2]) % 10007;
}

int main() {
    int n;
    cin >> n;
    for (int i = 3; i <= n; ++i) {
        block[i] = count(i);
    }
    cout << block[n] << endl;
    return 0;
}