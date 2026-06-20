#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sol.h"

const int problem = 181840;

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

/**
 * 정수가 담긴 리스트 num_list가 주어집니다. 
 * num_list의 홀수만 순서대로 이어 붙인 수와 짝수만 순서대로 이어 붙인 수의 합을 
 * return하도록 solution 함수를 완성해주세요.
 */
int solution_181928 (int num_list[], size_t num_list_len) {
    int num_odd = 0;
    int num_even = 0;
    int index = 0;
    for (index = 0; index < num_list_len; ++index) {
        if ((num_list[index] % 2) == 0) {
            num_even = num_even + num_list[index];
            num_even = num_even * 10;
        } else {
            num_odd = num_odd + num_list[index];
            num_odd = num_odd * 10;
        }
    }
    int ret = (num_even / 10) + (num_odd / 10);
    return ret;
}

/**
 * 정수 리스트 num_list와 찾으려는 정수 n이 주어질 때, 
 * num_list안에 n이 있으면 1을 없으면 0을 return하도록 solution 함수를 완성해주세요.
 */
int solution_181840 (int num_list[], size_t num_list_len, int n) {
    int answer = 0;
    int index = 0;
    for (index = 0; index < num_list_len; ++index) {
        if (num_list[index] == n) {
            answer = 1;
            break;
        }
    }
    return answer;
}

/**
 * 정수 n이 주어질 때, n을 문자열로 변환하여 return하도록 solution 함수를 완성해주세요.
 */
char* solution_181845 (int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc (1);
    return answer;
}