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
typedef int (*set_table_verify) (unsigned int [], int);
int do_setTableVerify(set_table_verify op, unsigned int T[], int length) {
    return op(T, length);
}
int setTableVerify(unsigned int T[], int n) {

}










#endif //CNC_2011_FIRSTPROBLEM_H
