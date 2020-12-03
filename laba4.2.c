#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
int main (void) {
    
    int i, k, size;
    printf("n = ");
    if (scanf("%d", &size) != 1 || size < 1) {
        fputs("Error! Incorrect size of array.\n", stderr);
        return 1;
    }
 
    
    int **a = (int **)malloc(sizeof(int *) * size);
    if (a == NULL) {
        fputs("Error! Can't allocate memory.\n", stderr);
        return 2;
    }
    a[0] = (int *)malloc(sizeof(int) * size*size);
    if (a[0] == NULL) {
        fputs("Error! Can't allocate memory.\n", stderr);
        free(a);
        return 2;
    }
    for (i = 1; i < size; ++i)
        a[i] = a[i-1] + size;
 
    
    srand( (unsigned int)time(NULL)/2 );
    for (i = 0; i < size; ++i, puts(""))
        for (k = 0; k < size; ++k)
            printf("%4d", a[i][k] = rand() %10);
 
    
    int min = 0;
    int max = 0;
    for (i = 1; i < size*size; ++i) {
        if (*(a[0]+i) < *(a[0]+min)) min = i;
        if (*(a[0]+i) > *(a[0]+max)) max = i;
    }
    printf("a[min] = %d\n", *(a[0]+min));
    printf("a[max] = %d\n", *(a[0]+max));
 
   
    int row = min/size;
    int col = max%size;
    printf("switch %d row and %d column\n\n", row, col);
 
    
    for (i = 0; i < size; ++i) {
        int tmp = a[row][i];
        a[row][i] = a[i][col];
        a[i][col] = tmp;
    }
 
    
    for (i = 0; i < size; ++i, puts(""))
        for (k = 0; k < size; ++k)
            printf("%4d", a[i][k]);
 
    
    free(a[0]);
    free(a);
    return 0;
}

