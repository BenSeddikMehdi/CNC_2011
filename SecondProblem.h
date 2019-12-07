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

/**************/
/* Question 2 */
#define Nb 4
#define L 5
int do_language_hamming_distance(int (*op) (const char [Nb][L]),
                        const char S1[Nb][L]) {
    return op(S1);
}
int language_hamming_distance(const char S1[Nb][L]) {
    int min = do_hamming_distance(hamming_distance, S1[0], S1[1]);
    for (int i = 0; i < 3; ++i) {
        for (int j = i+1; j < 4; ++j) {
            if (do_hamming_distance(hamming_distance, S1[i], S1[j]) < min)
                min = do_hamming_distance(hamming_distance, S1[i], S1[j]);
        }
    }
    return min;
}

/**************/
/* Question 3-a*/
void do_byte_to_string_binary(void (*op) (char [], int),
                                char bin[], int octet) {
    op(bin, octet);
}
void byte_to_string_binary(char bin[], int octet) {
    if (octet >= 0 && octet < 256) {
        for (int i = 0; i < 8; ++i) {
            bin[8-i-1] = (char) (octet%2 + '0');
            octet /= 2;
        }
        bin[8] = '\0';
    }
}

/**************/
/* Question 3-b */
int do_hamming_distance_numbers(int (*op) (int, int),
                            int A, int B) {
    return op(A, B);
}
int hamming_distance_numbers(int A, int B) {
    if (A >= 0 && A < 256 && B >= 0 && B < 256) {
        char aBin[9], bBin[9];
        do_byte_to_string_binary(byte_to_string_binary, aBin, A);
        do_byte_to_string_binary(byte_to_string_binary, bBin, B);
        return do_hamming_distance(hamming_distance,  aBin, bBin);
    } else
        return 0;
}










#endif //CNC_2011_SECONDPROBLEM_H
