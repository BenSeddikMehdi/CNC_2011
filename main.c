#include <stdio.h>
//#include "FirstProblem.h"
#include "SecondProblem.h"

int main() {
    char bin[9];
    do_hamming_distance_numbers(hamming_distance_numbers, bin, 128);
    for (int i = 0; bin[i] != '\0'; ++i) {
        printf("%d ", bin[i]-'0');
    }
    return 0;
}