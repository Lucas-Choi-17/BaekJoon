#include <iostream>

using namespace std;

int N;
char board[50][50];
int ans = 0;

void swap(char &a, char &b);

void check();

int main() {
    cin >> N;

    // red: C, blue: P, green: Z, yellow: Y
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N; ++j) {
            // change row
            swap(board[i][j], board[i + 1][j]);
            check();
            swap(board[i][j], board[i + 1][j]);
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            // change col
            swap(board[i][j], board[i][j + 1]);
            check();
            swap(board[i][j], board[i][j + 1]);
        }
    }

    cout << ans << endl;

    return 0;
}

void swap(char &a, char &b) {
    char tmp = a;
    a = b;
    b = tmp;
}

void check() {
    char flag;
    int count;
    // row check
    for (int i = 0; i < N; ++i) {
        count = 1;
        flag = board[i][0];
        for (int j = 1; j < N; ++j) {
            if (board[i][j] == flag) {
                count++;
                ans = ans > count ? ans : count;
                continue;
            } else {
                ans = ans > count ? ans : count;
                flag = board[i][j];
                count = 1;
            }
        }
    }

    // col check
    for (int i = 0; i < N; ++i) {
        count = 1;
        flag = board[0][i];
        for (int j = 1; j < N; ++j) {
            if (board[j][i] == flag) {
                count++;
                ans = ans > count ? ans : count;
                continue;
            } else {
                ans = ans > count ? ans : count;
                flag = board[j][i];
                count = 1;
            }
        }
    }
}