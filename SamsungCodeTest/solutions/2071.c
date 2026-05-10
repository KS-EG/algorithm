#include <stdio.h>

#define NUM             10U
#define GET_T           getTestCase
#define CLEAN_ARRAY     cleanGlobalArray
#define GET_INPUT       getInput
#define GET_RESULT      getResult

int     vGArray[NUM];

int     getTestCase(void);
void    printMessage(const char * msg);
void    cleanGlobalArray(void);
void    getInput(void);
int     getResult(void);

int getResult(void)
{
    int ret     = 0U;
    int first   = 0U;
    int remain  = 0U;
    for(int i = 0; i < NUM; ++i)
    {
        ret = ret + vGArray[i];        
    }
    first   = ret / 10U;
    remain  = ret % 10U;
    if(remain >= 5U)
    {
        first = first + 1U;        
    }
    return first;
}

void getInput(void)
{
    int tmp;
    for(int i = 0; i < NUM; ++i)
    {
        scanf("%d", &tmp);
        vGArray[i] = tmp;
    }
}

void cleanGlobalArray(void)
{
    for(int i = 0; i < NUM; i++)
    {
        vGArray[i] = 0U;
    }
}

int getTestCase(void)
{
    int ret;
    scanf("%d", &ret);
    return ret;
}

int main(int argc, char **argv)
{
    int T;
    T = GET_T();
    for(int i = 0; i < T; i++)
    {
        CLEAN_ARRAY();
        GET_INPUT();
        printf("#%d %d\n", (i+1), GET_RESULT());
    }
    return 0;
}