#include <stdio.h>

const unsigned int VERSION[1U] = {2029U};

int array_2063[200U] = {0U};
int N_2063;

static void dummy(void);
static void init_2063(void);
static void sol_2063(void);

void (*sol)(void);
void (*init)(void);

static void dummy(void)
{
    ;
}

static void init_2063(void)
{
    int idx;
    int num;
    for(idx = 0; idx < 200U; ++idx)
    {
        array_2063[idx] = 0;
    }
    scanf("%d", &N_2063);
    for(idx=0; idx < N_2063; ++idx)
    {
        scanf("%d", &num);
        array_2063[num] = 1;
    }
}

static void sol_2063(void)
{
    int idx;
    int num = 0;
    int result = 0;
    int cnt = 0;
    for(idx = 0; idx < 200; ++idx)
    {
        if(1 == array_2063[idx])
        {
            cnt = cnt + 1;            
        }
    }
    for(idx = 0; idx < 200; ++idx)
    {
        if(1 == array_2063[idx])
        {
            num = num + 1;            
        }
        if(cnt % 2 == 0)
        {
            if(num == ((cnt / 2) + 2))
            {
                result = idx;
                break;
            }
        }
        else
        {
            if(num == ((cnt / 2) + 1))
            {
                result = idx;
                break;
            }

        }
    }
    printf("%d\n", result);
}

int a_2029;
int b_2029;
int T_2029;

static void init_2029(void);
static void sol_2029(void);

static void init_2029(void)
{
    scanf("%d", &T_2029);
}

static void sol_2029(void)
{
    int idx;
    for(idx=0; idx<T_2029; ++idx)
    {
        scanf("%d %d", &a_2029, &b_2029);
        printf("#%d %d %d\n", (idx+1), (a_2029 / b_2029), (a_2029 % b_2029));
    }
}

int main(int argc, char **argv)
{
    if(2063U == VERSION[0U])
    {
        init = init_2063;
        sol = sol_2063;
    }
    else if(2029U == VERSION[0U])
    {
        init = init_2029;
        sol = sol_2029;
    }
    else
    {
        init = dummy;
        sol = dummy;
    }
    init();
    sol();
    return 0;
}