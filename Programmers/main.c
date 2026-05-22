#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM 181939

#if (NUM == 181940)
char* solution(const char* my_string, int k);
#endif

#if (NUM == 181938)
int solution(int a, int b);
#endif

#if (NUM == 181939)
int solution(int a, int b);
#endif

int main(int argc, char **argv)
{
    #if (NUM == 181941)
    const char* tst1[3] = {"a","b","c"};
    printf("%s", solution(tst1, 3));
    #endif

    #if (NUM == 181940)
    const char * tst = "tst1";
    printf("%s", solution(tst, 3));
    #endif

    #if (NUM == 181938)
    printf("%d\n", solution(1, 3));
    printf("%d\n", solution(3, 1));
    #endif

    #if (NUM == 181939)
    printf("%d\n", solution(1, 3));
    printf("%d\n", solution(3, 1));
    #endif

    return 0;
}