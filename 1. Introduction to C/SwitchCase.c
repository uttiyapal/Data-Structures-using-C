
#include <stdio.h>

int main()
{
    int grade = 2;

    /* Order of the case statements do not matter */
    switch (grade)
    {
        case 4:
        case 3:
        case 2:
        case 1:
            printf("Passing grade");
            break;
        default:
            printf("Illegal grade");
            break;
        case 0:
            printf("Failing grade");
            break;
    }
}