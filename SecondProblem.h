//
// Created by El Mehdi Benseddik on 12/6/2019.
//

#ifndef CNC_2011_SECONDPROBLEM_H
#define CNC_2011_SECONDPROBLEM_H

/********************/
/* Hamming Distance */
/********************/

#include <stdlib.h>
#include <string.h>

/**************/
/* Question 1 */
int do_hamming_distance(int (*op) (const char [], const char []),
        const char S1[], const char S2[]) {
    return op(S1, S2);
}
int hamming_distance(const char S1[], const char S2[]) {
    if (strlen(S1) != strlen(S2)) {
        printf("Strings must have the same length\n");
        exit(EXIT_FAILURE);
    }
    int flag = 0;
    for (int i = 0; S1[i] != '\0'; ++i) {
        if (S1[i] != S2[i]) flag++;
    }
    return flag;
}













#endif //CNC_2011_SECONDPROBLEM_H
