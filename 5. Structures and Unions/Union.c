
#include <stdio.h>

int main(){
    /* Union */
    union{
        int i;
        double d;
    } u = {.d = 10.0};

    /* Enumeration */
    int i;
    enum{
        CLUBS, DIAMONDS, HEARTS, SPADES
    } s;

    i = DIAMONDS; /* i is now 1 */
    printf("%d\n",i);
    s = 0;        /* s is now 0 (CLUBS) */
    printf("%d\n",s);
    s++;          /* s is now 1 (DIAMONDS) */
    printf("%d\n",s);
    i = s + 2;    /* i is now 3 */
    printf("%d\n",i);
}