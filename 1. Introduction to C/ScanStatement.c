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

    /* Input:229
    229
    345
    e5 */
}