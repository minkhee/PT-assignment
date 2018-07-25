#include <stdio.h>
#include <stdlib.h>
void border(int length);

int main()
{
    printf("                     \====================================\n");
    printf("                     = ~Welcome to Snakes and Ladders~  = \n");
    printf("                     \====================================\n\n\n");
    int length = 16;
    printf("\t\t");
    border(length);
    printf("                |41 \| 42 \| 43 \| 44 \| 45 \| 46 \| 47 \| 48 \| 49 \| 50\|\n");
    printf("\t\t");
    border(length);
    printf("                \|40 \| 39 \| 38 \| 37 \| 36 \| 35 \| 34 \| 33 \| 32 \| 31\|\n");
    printf("\t\t");
    border(length);
    printf("                \|21 \| 22 \| 23 \| 24 \| 25 \| 26 \| 27 \| 28 \| 29 \| 30\|\n");
    printf("\t\t");
    border(length);
    printf("                \|20 \| 19 \| 18 \| 17 \| 16 \| 15 \| 14 \| 13 \| 12 \| 11\|\n");
    printf("\t\t");
    border(length);
    printf("                \| 1 \|  2 \|  3 \|  4 \|  5 \|  6 \|  7 \|  8 \|  9 \| 10\|\n");
    printf("\t\t");
    border(length);
        return 0;
}

void border (int length){//borders for the game
    int i;
    for(i=0; i<length; i++){
        printf("___");}//end loop
        printf("\n");
    }
