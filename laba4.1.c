#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
enum {N=7, M=7};
 
int main (void) {
    int a[N][M];
    int i, k;
 
    srand( (unsigned) time(NULL)/2 );
    for (i = 0; i < N; i++, puts(""))
        for (k = 0; k < M; k++)
            printf("% 5d", a[i][k] = rand() %101 - 50);
    puts("");
 
    int min;
    int first = 1;
    double min_avg;
    for (k = 0; k < M; k++) {
        int sum = 0;
        int count = 0;
        for (i = 0; i < N-k-1; i++)
            if (a[i][k] > 0) {
                sum += a[i][k];
                count++;
            }
        double avg = (count > 0)? (double) sum / count : -1.0;
        printf("% 5.1lf", avg);
        if (avg > -1) {
            if (first > 0 || avg < min_avg) {
                min = k,
                first = 0;
                min_avg = avg;
            }
        }
    }
 
    if (first < 1)
        printf("\nmin: %d\n", min);
    else
        puts("There are no columns matching the condition");
    return 0;
}
