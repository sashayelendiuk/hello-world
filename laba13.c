#define SIZE 1024 
#define WSIZE 4
 
#if WSIZE < 1
#    error "WSIZE must be greater than zero."
#endif
 
int main(void) 
{
    char arr[SIZE];
    FILE *fp
    int q = 0;
    char word[WSIZE + 1];
 
    fp = fopen("file", "r");
    if (!fp)
        return -1;
 
    (void) fgets(arr, SIZE - 1, fp);
    fclose(fp);
 
    for (int i = 0; i < SIZE; i++) {
        int c = arr[i];
 
        if (q == WSIZE) {
            q = 0;
 
            printf("%s\n", word);
 
            continue;
        }
 
        if (c != ' ') {
            word[q] = c;
            q++;
        }
        else {
            if (q < WSIZE) {
                for (int j = 0; j < WSIZE; j++)
                    word[j] = 0;
            }
        }
    }
 
    return 0;
}
