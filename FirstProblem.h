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

/**************/
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

/**************/
/* Question 2 */
int do_belongIntoSetTable(int (*op) (const unsigned int [], int, unsigned int), const unsigned int T[], int length, unsigned int value) {
    return op(T, length, value);
}
int belongIntoSetTable(const unsigned int T[], int length, unsigned int value) {
    for (int i = 0; i < length; ++i) {
        if (*(T+i) == value) return 1;
    }
    return 0;
}

/**************/
/* Question 3 */
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

/**************/
/* Question 4 */
int do_T1_Inclusion_T2(int (*op) (const unsigned int [], const unsigned int [], int, int),
                       const unsigned int T1[], const unsigned int T2[], int length1, int length2) {
    return op(T1, T2, length1, length2);
}
int t1_inclusion_t2(const unsigned int T1[], const unsigned int T2[], int n1, int n2) {
    for (int i = 0; i < n1; ++i) {
        int flag = 0;
        for (int j = 0; j < n2; ++j) {
            if (T1[i] == T2[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return 0;
    }
    return 1;
}

/**************/
/* Question 5 */
void do_union_T1_T2(void (*op) (unsigned int [], unsigned int [], int, int),
                    unsigned int T1[], unsigned int T2[], int length1, int length2) {
    op(T1, T2, length1, length2);
}
void union_t1_t2(unsigned int T1[], unsigned int T2[], int n1, int n2) {
    if (n1 > n2) {
        int flag = 0;
        for (int j = 0; j < n2; ++j) {
            if (!do_belongIntoSetTable(belongIntoSetTable, T1, n1, T2[j])) {
                flag++;
            }
        }
        unsigned int T[n1+flag];
        int i = 0;
        for (i = 0; i < n1; ++i) {
            T[i] = T1[i];
        }
        for (int j = 0; j < n2; ++j) {
            if (!do_belongIntoSetTable(belongIntoSetTable, T1, n1, T2[j])) {
                T[i] = T2[j];
                i++;
            }
        }
        do_sortingSetTable(sortingSetTable, T, n1+flag);
        printf("T = ");
        for (int k = 0; k < n1+flag; ++k) {
            printf("%d ", T[k]);
        }
        printf("\n");
    } else {
        int flag = 0;
        for (int j = 0; j < n1; ++j) {
            if (!do_belongIntoSetTable(belongIntoSetTable, T2, n2, T1[j])) {
                flag++;
            }
        }
        unsigned int T[n2+flag];
        int i = 0;
        for (i = 0; i < n2; ++i) {
            T[i] = T2[i];
        }
        for (int j = 0; j < n1; ++j) {
            if (!do_belongIntoSetTable(belongIntoSetTable, T2, n2, T1[j])) {
                T[i] = T1[j];
                i++;
            }
        }
        do_sortingSetTable(sortingSetTable, T, n2+flag);
        printf("T = ");
        for (int k = 0; k < n2+flag; ++k) {
            printf("%d ", T[k]);
        }
        printf("\n");
    }
}
#endif //CNC_2011_FIRSTPROBLEM_H
