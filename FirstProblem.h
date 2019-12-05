//
// Created by El Mehdi Benseddik on 12/5/2019.
//

#ifndef CNC_2011_FIRSTPROBLEM_H
#define CNC_2011_FIRSTPROBLEM_H
#include <string.h>

/***********************************/
/* Operations on Mathematical Sets */
/***********************************/

/***************************************************/
/* Part A: Representation of finite sets by tables */
/***************************************************/

/**************************************/
/* Question 1: Set Table Verification */
typedef int (*set_table_verify) (const unsigned int [], int);
int do_setTableVerify(set_table_verify op, const unsigned int T[], int length) {
    return op(T, length);
}
int setTableVerify(const unsigned int T[], int n) {//2, 3, 5, 3, 5
    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n-1; ++j) {
            if (T[i]==T[j+1]) return 0;
        }
    }
    return 1;
}










#endif //CNC_2011_FIRSTPROBLEM_H
