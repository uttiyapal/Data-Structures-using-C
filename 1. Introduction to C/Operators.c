
#include <stdio.h>

int main(void){
    int i; float f;
    f = i = 33.3f; // "=" operator is right associative, so i has truncated value 33, which is then stored in f as 33.000000 
    printf("i=%d\n",i); // i=33
    printf("f=%f\n",f); // f=33.000000
}