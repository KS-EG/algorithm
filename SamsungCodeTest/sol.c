#include <stdio.h>

static void init_2027(void);
static void sol_2027(void);

static void init_2027(void)
{
    ;
}

static void sol_2027(void)
{
    printf("#++++\n");
    printf("+#+++\n");
    printf("++#++\n");
    printf("+++#+\n");
    printf("++++#\n");
}

int N_2025;
static void init_2025(void);
static void init_2025(void)
{
    N_2025 = 0;
    scanf("%d", &N_2025);
}

static void sol_2025(void);
static void sol_2025(void)
{
    int result = 0;
    int index;
    for(index = 0; index <= N_2025; ++index)
    {
        result = result + index;
    }
    printf("%d\n", result);
}

#define NUM 1938
int nums_1938[2];

static void init_1938(void);
static void init_1938(void)
{
    scanf("%d %d", &nums_1938[0], &nums_1938[1]);
}

static void sol_1938(void);
static void sol_1938(void)
{
    printf("%d\n", nums_1938[0] + nums_1938[1]);
    printf("%d\n", nums_1938[0] - nums_1938[1]);
    printf("%d\n", nums_1938[0] * nums_1938[1]);
    printf("%d\n", nums_1938[0] / nums_1938[1]);
}

static void (*init)(void);
static void (*sol)(void);

int main(int argc, char **argv)
{
    if(2027 == NUM)
    {
        init = init_2027;
        sol = sol_2027;
    }
    else if(2025 == NUM)
    {
        init = init_2025;
        sol = sol_2025;
    }
    else if(1938 == NUM)
    {
        init = init_1938;
        sol = sol_1938;
    }
    else
    {
        init = init_2027;
        sol = sol_2027;
    }
    init();
    sol();
    return 0;
}