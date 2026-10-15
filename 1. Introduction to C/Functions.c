
#include <stdio.h>

void swap_by_val(int, int);
void swap_by_ref(int*, int*);

int main(){
    int num1 = 45, num2 = 60;
    printf("num1 = %d and num2 = %d\n",num1,num2);
    swap_by_val(num1,num2);
    printf("Swapping by values:\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);
    swap_by_ref(&num1,&num2);
    printf("Swapping by reference:\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);
}

void swap_by_val(int num1, int num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void swap_by_ref(int* num1, int* num2){
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}