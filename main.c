#include <stdio.h>
#include "FirstProblem.h"

int main() {
    unsigned int T1[] = {2, 3, 4, 5, 8}, T2[] = {1, 6, 4, 11, 7, 5, 9, 8};
    int n1 = (int) (sizeof(T1)/ sizeof(T1[0])), n2 = (int) (sizeof(T2)/ sizeof(T2[0]));
    int n = do_union_T1_T2(union_t1_t2, T1, T2
            , n1, n2);
    return 0;
}