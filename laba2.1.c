#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define N 12 
int main()
{
    unsigned i = 0; int min, i_min = 0;
    double Z[N], aver = 0;
    srand(time(0));
    for ( i = 0; i < N; ++i)
        Z[i] = rand() % 201 - 100;
 
    for ( i = 0; i < N; ++i)
    {
        if (Z[i] < Z[i_min])
            i_min = i;
        if (Z[i] < 0)
            aver += Z[i];
    }
    aver = -aver / N;
 
    printf("minimal element = %.2lf\nabsolute value of average by negative elements = %.2lf\n\nZ array = ", Z[i_min], aver);
    for ( i = 0; i < N; ++i)
        printf("%.2lf  ", Z[i]);
    printf("\n\nResult array = ");
 
    Z[i_min] = aver;
    for ( i = 0; i < N; ++i)
        printf("%.2lf  ", Z[i]);
    printf("\n");
 
    getchar();
 
    return 0;
}
