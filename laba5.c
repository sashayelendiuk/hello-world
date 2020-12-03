#include <stdio.h>
#include <stdlib.h>
#define n 3
 
int main()
{
    int A[n][n] = {{2, 4, -9}, {-6, 1, 9}, { 2, 6, 0}};
 
    int *ptr_mas = (int*)calloc(n, sizeof(int));        
 
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            *(ptr_mas + j) += A[i][j];
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr_mas + i));
    }
    putchar('\n');
    getchar();          
 
}
