
#include <stdio.h>
#define NAME_LEN 20
#define FIRST_NAME_LEN 20
#define LAST_NAME_LEN 20

int main(){
    /* Declaring a struct variable */
    struct part{
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } part1={528,"Disk Drive",10}, part2={914,"Printer Cable",5};

    printf("Part number: %d\n",part2.number); // 914
    printf("Part name: %s\n",part2.name); // Printer Cable
    printf("Quantity on hand: %d\n",part2.on_hand); // 5

    struct part part3 = {.on_hand = 40, .name = "PC Chip", .number = 678};
    // part part3; is WRONG
}