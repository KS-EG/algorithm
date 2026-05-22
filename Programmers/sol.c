#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM 181939

static char* solution_181941(const char* arr[], size_t arr_len);
static char* solution_181941(const char* arr[], size_t arr_len)
{
    char* answer = (char*)malloc(1 + arr_len);
    int idx;
    for(idx=0; idx < (1 + arr_len); ++idx)
    {
        answer[idx] = '\0';
    }
    for(idx=0; idx < (arr_len); ++idx)
    {
        answer[idx] = arr[idx][0];
    }
    return answer;
}

static int get_string_len_v1(const char* str);
static int get_string_len_v1(const char* str)
{
    int ret = 0;
    int idx = 0;
    while('\0' != str[idx])
    {
        ret++;
        idx++;
    }
    return ret;
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static char* solution_181940(const char* my_string, int k);
static char* solution_181940(const char* my_string, int k)
{
    char* ret;
    int idx, idy;
    int len = get_string_len_v1(my_string);
    char* answer = (char*)malloc(1 + len * k);
    for(idx=0; idx < (1 + len * k); ++idx)
    {
        answer[idx] = '\0';
    }
    for(idx=0; idx < (k); idx++)
    {
        for(idy=0; idy < len; idy++)
        {
            answer[idx * len + idy] = my_string[idy];
        }
    }
    return answer;
}

static int get_digits_v1(int num);
static int get_digits_v1(int num)
{
    int ret = 0;
    int num_cp = num;
    while(num_cp > 0)
    {
        num_cp = num_cp / 10;
        ret++;
    }
    return ret;
}

static int get_spectial_plus_v1(int a, int b)
{
    int idx;
    int ret = a;
    for(idx=0; idx < get_digits_v1(b); idx++)
    {
        ret = ret * 10;
    }
    ret = ret + b;
    return ret;
}

static int solution_181938(int a, int b);
static int solution_181938(int a, int b)
{
    int ret;
    if(get_spectial_plus_v1(a, b) < (2 * a * b))
    {
        ret = (2 * a * b);
    }
    else
    {
        ret = get_spectial_plus_v1(a, b);
    }
    return ret;
}


static int solution_181939(int a, int b);
static int solution_181939(int a, int b)
{
    int ret;
    if(get_spectial_plus_v1(a, b) < get_spectial_plus_v1(b, a))
    {
        ret = get_spectial_plus_v1(b, a);
    }
    else
    {
        ret = get_spectial_plus_v1(a, b);
    }
    return ret;
}

#if (NUM == 181941)
extern char* solution(const char* arr[], size_t arr_len);
char* solution(const char* arr[], size_t arr_len)
{
    return solution_181941(arr, arr_len);
}
#endif

#if (NUM == 181940)
extern char* solution(const char* my_string, int k);
char* solution(const char* my_string, int k)
{
    return solution_181940(my_string, k);
}
#endif

#if (NUM == 181938)
extern int solution(int a, int b);
int solution(int a, int b)
{
    return solution_181938(a, b);
}
#endif

#if (NUM == 181939)
extern int solution(int a, int b);
int solution(int a, int b)
{
    return solution_181939(a, b);
}
#endif