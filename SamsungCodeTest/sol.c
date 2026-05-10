#include <stdio.h>

const unsigned int VERSION[1U] = {2063U};
int array[200U] = {0U};
int N;

void (*sol)(void);
void (*init)(void);

static void dummy(void);
static void init_2063(void);
static void sol_2063(void);

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
        array[idx] = 0;
    }
    scanf("%d", &N);
    for(idx=0; idx < N; ++idx)
    {
        scanf("%d", &num);
        array[num] = 1;
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
        if(1 == array[idx])
        {
            cnt = cnt + 1;            
        }
    }
    for(idx = 0; idx < 200; ++idx)
    {
        if(1 == array[idx])
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
    // printf("%d %d %d %d\n", N, num, result, ((N / 2) + 1));
    printf("%d\n", result);
}

int main(int argc, char **argv)
{
    if(2063U == VERSION[0U])
    {
        init = init_2063;
        sol = sol_2063;
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