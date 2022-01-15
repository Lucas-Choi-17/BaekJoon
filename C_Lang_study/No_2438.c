//
// Created by 최승인 on 2022/01/13.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}