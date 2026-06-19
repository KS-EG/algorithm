#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sol.h"

const int problem = 181930;

char* solution_181932 (const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int mode = 0;
    int index = 0;
    int size = 0;
    char array[100001];
    while (code[index] != '\0') {
        if (code[index] == '1') {
            mode ^= 1;
        } else { /*not 1*/
            if (mode == 1) {
                if ((index % 2) == 1) {
                    array[size] = code[index];
                    ++size; 
                } else {
                    /*noop*/
                }
            } else { /*mode 0*/
                if ((index % 2) == 0) {
                    array[size] = code[index];
                    ++size;
                } else {
                    /*noop*/
                }
            }
        }
        ++index;
    }
    char* answer;
    if (size == 0) {
        answer = (char*) malloc (6);
        answer[0] = 'E';
        answer[1] = 'M';
        answer[2] = 'P';
        answer[3] = 'T';
        answer[4] = 'Y';
        answer[5] = '\0';
    } else {
        answer = (char*) malloc (size + 1);
        for (index = 0; index < size; ++index) {
            answer[index] = array[index];
        }
        answer[size] = '\0';
    }
    return answer;
}

int solution_181850 (double flo) {
    int ret = (int)flo;
    return ret;
}

int solution_181930 (int a, int b, int c) {
    int answer = 0;
    int part1 = (a + b + c);
    int part2 = (a * a + b * b + c * c);
    int part3 = (a * a * a + b * b * b + c * c * c);
    if ((a == b) && 
        (b == c)) {
        answer = part1 * part2 * part3;
    } else {
        if ((a == b) || 
            (b == c) || 
            (c == a)) {
            answer = part1 * part2;
        } else {
            answer = part1;
        }
    }
    return answer;
}