#include <stdio.h>

int main()
{
    unsigned int u;

    scanf("%u", &u); /* reads u in base 10 */
    printf("%u\n", u); /* writes u in base 10 */

    // scanf("%o", &u); /* reads u in base 8 */
    printf("%o\n", u); /* writes u in base 8 */

    // scanf("%x", &u); /* reads u in base 16 */
    printf("%x\n", u); /* writes u in base 16 */

    short s;

    scanf("%hd", &s);
    printf("%hd\n", s);

    long l;

    scanf("%ld", &l);
    printf("%ld\n", l);

    double d;
    scanf("%lf", &d);

    char ch;

    scanf("%c", &ch); /* reads a single character */
    printf("%c\n", ch); /* writes a single character */
}