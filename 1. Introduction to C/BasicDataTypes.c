#include <stdio.h>

int main(){
    char ch; int x; float var; double num;
    
    printf("ch: %d\n",sizeof(ch)); // ch: 1
    printf("int: %d\n",sizeof(x)); // int: 4
    printf("float: %d\n",sizeof(var)); // float: 4
    printf("double: %d\n",sizeof(num)); // double: 8
    
    short sum; long flag; long long equation;
    
    printf("short: %d\n",sizeof(sum)); // short (int): 2
    printf("long: %d\n",sizeof(flag)); // long (int): 4
    printf("long long: %d\n",sizeof(equation)); // long long (int): 8   

    _Bool tmp= 5; /* The size of a Boolean variable is 1 Byte */
    printf("tmp=%d\n",tmp); // tmp=1 ; Assumes value 1 for all non-zero values as it is Boolean variable.
}
