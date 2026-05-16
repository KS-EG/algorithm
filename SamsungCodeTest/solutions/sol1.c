#include <stdio.h>

int array_2063[200U] = {0U};
int N_2063;

static void init_2063(void);
static void sol_2063(void);

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

int N_2046;

static void init_2046(void);
static void sol_2046(void);

static void init_2046(void)
{
    scanf("%d", &N_2046);
}

static void sol_2046(void)
{
    int idx;
    for(idx=0;idx<N_2046;++idx)
    {
        printf("#");
    }
}

const unsigned int VERSION[1U] = {2046U};

void (*sol)(void);
void (*init)(void);

typedef struct {
    unsigned int version;
    void (*init)(void);
    void (*sol)(void);
} Problem;

Problem problems[] = 
{
    {2063U, init_2063, sol_2063},
    {2029U, init_2029, sol_2029},
    {2046U, init_2046, sol_2046}
};

int main(int argc, char **argv)
{
    int i;
    int count = sizeof(problems) / sizeof(problems[0]);

    for(i = 0; i < count; ++i)
    {
        if(problems[i].version == VERSION[0])
        {
            problems[i].init();
            problems[i].sol();
        }
    }
    return 0;
}