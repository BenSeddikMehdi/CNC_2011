#include <stdio.h>
#include "FirstProblem.h"

int main() {
    const unsigned int T[] = {2, 9, 4, 8, 5};
    int n = do_belongIntoSetTable(belongIntoSetTable, T, (sizeof(T)/ sizeof(T[0])), 98);
    printf("check if value is in or not = %d\n", n);
    return 0;
}