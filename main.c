#include <stdio.h>
#include "FirstProblem.h"
#include "SecondProblem.h"

#define N 5

int main() {
    setList_t* plist = NULL;
    do_create_linked_list(createLinkedList, &plist, 7);
    for (int i = 0; i < N; ++i) {
        do_create_linked_list(createLinkedList, &plist, N-i-1);
    }
    do_inserting_value(insertingValue, plist, 5);
    printLinkedList(plist);
    plist = NULL;
    return 0;
}