#include <stdio.h>
#include "FirstProblem.h"

int main() {
    unsigned int T[] = {2, 9, 4, 8, 5, 22, 7, 1};
    do_sortingSetTable(sortingSetTable, T, (int) (sizeof(T)/ sizeof(T[0])));
    printf("Sorted Array = ");
    for (int i = 0; i < (int) (sizeof(T)/ sizeof(T[0])); ++i) {
        printf("%d ", *(T+i));
    }
    return 0;
}