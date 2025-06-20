#include <stdio.h>
#include <stdlib.h>
#include "ex.h"

int ex2(){
    int *p = (int *)malloc(sizeof(int) * 12);
    if (p == NULL) {
        printf("メモリの確保に失敗しました\n");
        return 1;
    }
    for (int i = 0; i < 12; i++) {
        printf("[%d] = ? ", i);
        scanf("%d", &p[i]);
    }
    for (int i = 1; i <= 12; i++) {
        printf("%d ", *(p + i - 1));
        if(i % 4 == 0){
            printf("\n");
        }
    }
    free(p);
    return 0;
}