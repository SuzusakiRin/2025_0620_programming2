#include <stdio.h>
#include <stdlib.h>
#include "ex.h"

int ex1() {
    int *p = (int *)malloc(sizeof(int) * 12);
    if (p == NULL) {
        printf("メモリの確保に失敗しました\n");
        return 1;
    }
    for (int i = 0; i < 12; i++) {
        printf("[%d] = ? ", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", p[i * 4 + j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}