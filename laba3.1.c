#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int N,M,i,j;
scanf("%d",&N);
scanf("%d",&M);
int A[N][M];
int zero;
zero=0;
for (i = 0; i < N; i++ ) {
for (j = 0; j < M; j++ ) {
    A[i][j] =  rand()%(10)-1;
    printf("%d ",A[i][j]);
    if (A[i][j]==0)
    zero=zero+1;
    }
puts("\n");
}
printf("Zero:%d",zero);
    return 0;
}
