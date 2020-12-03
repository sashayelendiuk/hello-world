int main() {
    
    char i = 0;
    char l = 0;
    char o = 0;
    char s[] = "brown left in tour and scill of wife";
    
    for(int j = 0; j < (sizeof(s)/sizeof(char)); j++) {
        if(s[j] ==  'i') {
            i++;
        } if (s[j] == 'l') {
            l++;
        } if (s[j] == 'o') {
            o++;
        }
        
    }
    
    
    printf("i = %d, l = %d, o = %d", i, l, o);
 
    return 0;
}
