#include <stdio.h>
#include "FirstProblem.h"

int main() {
    unsigned int T[] = {2, 9, 4, 8, 3, 22, 7, 0};
    int n = do_setTableVerify(setTableVerify, T, (int) (sizeof(T)/ sizeof(T[0])));
    printf("Validity = %d", n);
    return 0;
}