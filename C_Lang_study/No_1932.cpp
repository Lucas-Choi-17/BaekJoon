#include <iostream>

using namespace std;
int arr[500][500];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            arr[i][j] += arr[i + 1][j] > arr[i + 1][j + 1] ? arr[i + 1][j] : arr[i + 1][j + 1];
        }
    }
    cout << arr[0][0] << endl;
    return 0;
}