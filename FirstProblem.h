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

/***************/
/* Question 1 */
typedef int (*set_table_verify) (const unsigned int [], int);
int do_setTableVerify(set_table_verify op, const unsigned int T[], int length) {
    return op(T, length);
}
int setTableVerify(const unsigned int T[], int n) {//2, 3, 5, 3, 5
    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n-1; ++j) {
            if (T[i]==T[j+1] || T[j] == 0) return 0;
        }
    }
    return 1;
}

/***************/
/* Question 2 */
int do_belongIntoSetTable(int (*op) (const unsigned int [], int, int), const unsigned int T[], int length, int value) {
    return op(T, length, value);
}
int belongIntoSetTable(const unsigned int T[], int length, int value) {
    for (int i = 0; i < length; ++i) {
        if (*(T+i) == value) return 1;
    }
    return 0;
}

/***************/
/* Question 3*/
void do_sortingSetTable(void (*op) (unsigned int [], int), unsigned int T[], int length) {
    op(T, length);
}
void sortingSetTable(unsigned int T[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-1-i; ++j) {
            if (T[j] > T[j+1]) {
                unsigned int temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
    }
}




#endif //CNC_2011_FIRSTPROBLEM_H
