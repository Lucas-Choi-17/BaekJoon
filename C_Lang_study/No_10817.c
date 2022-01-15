//
// Created by 최승인 on 2022/01/15.
//

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans;
    if (a == b || a == c) {
        ans = a;
    } else if (b == c) {
        ans = b;
    } else {
        ans = a > b ? (a > c ? (b > c ? b : c) : a) : (b > c ? (a > c ? a : c) : b);
    }
    printf("%d", ans);
}