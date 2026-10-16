
#include <stdio.h>

void revprint_array(int*,int);

int main(){
    /* Array Name as Pointer */
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    *a = 7;
    *(a+2) = 12;
    for (int* i = a; i<(a+10); i++){
        printf("%d\t",*i);
    }
    printf("\n");
    /* 7       2       12      4       5       6       7       8       9       10 */

    /* Passing array as parameters */
    int n = sizeof(a)/sizeof(a[0]);
    revprint_array(a,n);
}

void revprint_array(int* arr, int len) /* Can also be written as void revprint_array(int arr[], int len) */
{
    for (int i = len-1; i>=0;i--){
        printf("%d\t",*(arr+i));
    }
}