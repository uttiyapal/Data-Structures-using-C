
#include <stdio.h>

int main(void){
    int i;
    if (i=0) printf("i is: %d\n",i);  // Checks if result is 0. Always fails.
    if (i=5) printf("i is: %d\n",i); // i is: 5
    if (i=-5) printf("i is: %d\n",i); // i is: -5
    if (i=0) printf("i is: %d\n",i); // Checks if result is 0. Always fails.
    
    /*
    Both && and || perform “short-circuit” evaluation of their operands. That is,
    these operators first evaluate the left operand, then the right operand. If the value of
    the expression can be deduced from the value of the left operand alone, then the
    right operand isn’t evaluated.
    */
    int x = -5, y = 0;
    if (x++||x++)
        printf("x=%d\n",x); // prints x=-4 as first x++ is true, so next x++ not executed
    if (y++||y++)
        printf("y=%d\n",y); // prints y=2 as first y++ is false, so next y++ is executed
    
}