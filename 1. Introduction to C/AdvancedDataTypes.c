
#include <stdio.h>
#include <string.h> /* For 'strcpy' function */
#include <stdlib.h> /* For 'malloc' function */

int main(){
    short num = 65536; /* In case of integer overflow, the value modulo 2^n is stored. */
    printf("num=%d\n",num);

    char ch;
    ch = getchar();
    putchar(ch);

    /* Dynamic Allocation of strings and array */
    int n = 4;

    char* p;
    p = malloc(n+1);
    strcpy(p,"abc");
    printf("%s\n",p);

    int* a;
    a = malloc(n*sizeof(int));
    *(a)=2; *(a+2)=5;
    for(int i=0;i<n;i++){
        printf("%d\t",*(a+i));
    }
}