#include <stdio.h>
#include "FirstProblem.h"

int main() {
    const unsigned int T[] = {2, 9, 4, 8, 5};
    int n = do_setTableVerify(setTableVerify, T, (sizeof(T)/ sizeof(T[0])));
    printf("n = %d\n", n);
    return 0;
}