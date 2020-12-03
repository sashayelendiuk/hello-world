#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 4
 
int main() {
    srand(time(NULL));
    int f[SIZE][SIZE];
    int sum[SIZE] = {0};
    
    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            f[i][j] = rand() % 201 - 100;
            if(f[i][j] < 0) {
                sum[i] += f[i][j];
            }
            printf("%d\t", f[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i = 0; i < SIZE; i++) {
        printf("row #%d: %d\n", i + 1, sum[i]);
    }
    
    return 0;
}
