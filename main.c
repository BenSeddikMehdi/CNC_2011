#include <stdio.h>
#include "FirstProblem.h"

int main() {
    setList_t* test = NULL, *p = NULL;
    int T[] = {3, 4, 8, 9}, n = (int) (sizeof(T)/ sizeof(T[0]));
    test = fillLinkedList(test, T, n);
    test = do_inserting_value(insertingValue, test, p, 2);
    test = do_inserting_value(insertingValue, test, p, 22);
    test = do_inserting_value(insertingValue, test, p, 1);
    test = do_inserting_value(insertingValue, test, p, 19);
    printLinkedList(test);
    free(test);
    free(p);
    return 0;
}