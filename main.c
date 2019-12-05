#include <stdio.h>
#include "FirstProblem.h"

int main() {
    const unsigned int T1[] = {2, 8, 7, 4}, T2[] = {2, 8, 6, 9, 4};
    int n = do_T1_Inclusion_T2(t1_inclusion_t2, T1, T2,
            (int) (sizeof(T1)/ sizeof(T1[0])), (int) (sizeof(T2)/ sizeof(T2[0])));
    printf("is T2 include T1 = %d", n);
    return 0;
}