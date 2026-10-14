#include <stdio.h>

int main(){
    float num = 45.628952f;

    /* %[flags][width][.precision][modifier]type */

    printf("%20.3f\n",num); // width=20 and precision=3
    printf("%20f\n",num); // width=20 and precision=6(default)
    printf("%.3f\n",num); // precision=3
    printf("%-20f\n",num); // width=20 and left-aligned(-)
    printf("%020f\n",num); // width=20 and padded with zeros on the left(0)
    printf("%+.3f\n",num); // precision=3 and displays its numeric sign(+)

    printf("\"\n"); // prints '\'
    printf("a\tb\tc\n\td\te\n");
}