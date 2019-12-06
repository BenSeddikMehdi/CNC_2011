#include <stdio.h>
#include "FirstProblem.h"

int main() {
    setList_t* test = NULL;
    int T[] = {2, 4, 6, 7}, n = (int) (sizeof(T)/ sizeof(T[0]));
    test = fillLinkedList(test, T, n);
    test = insertingValue(test, 3);
    printLinkedList(test);
    free(test);
    return 0;
}