#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sol.h"

int main (int argc, char **argv) {
    if (problem == 181932) {
        printf ("181932\n");
        printf ("%s", solution_181932 ("abd"));
    } else if (problem == 181850) {
        printf ("181932\n");
        printf ("%d\n", solution_181850(1.2));
    } else if (problem == 181930) {
        printf ("181930\n");
        printf ("%d\n", solution_181930(1, 1, 1));
        printf ("%d\n", solution_181930(1, 2, 3));
        printf ("%d\n", solution_181930(2, 2, 2));
    } else if (problem == 181928) {
        printf ("181928\n");
        int numlist1[1] = {3};
        printf ("%d\n", solution_181928(numlist1, 1));
        int numlist2[5] = {1, 2, 3, 4, 5};
        printf ("%d\n", solution_181928(numlist2, 5));
    } else if (problem == 181840) {
        printf ("181840\n");
        int numlist1[5] = {1, 2, 3, 4, 5};
        printf ("%d\n", solution_181840 (numlist1, 5, 0));
        printf ("%d\n", solution_181840 (numlist1, 5, 1));
    } else {
        /*noop*/
    }
    return 0;
}