#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{int dice=0;
    printf("PRESS ENTER : ");
    getchar();

    srand(time(0));

    dice=(rand()%6)+1;
    printf("%d", (rand()%6)+1);
    printf("\nYOU GET NUMBER %d\n", dice);


    return 0;
    }

