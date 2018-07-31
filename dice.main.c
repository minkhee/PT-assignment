#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("PRESS ENTER : ");
    getchar();

    srand(time(0));
    printf("\nYOU GET NUMBER %d\n",(rand()%6)+1);

    return 0;
    }

