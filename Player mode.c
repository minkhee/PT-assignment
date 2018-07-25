#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    printf("\n\t  ________ ________ ________ ________ ________ ________ ________ ________ ________ ________ ");
    printf("\n\t | Go  To |        |        |        |        |        |        |  Go To |        |        |");
    printf("\n\t | box 49 |        |        |        |        |        |        |  box 1 |        |  WIN!  |");
    printf("\n\t |   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |   %d   |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |________|________|________|________|________|________|________|________|________|________|");
    printf("\n\t |  REV   |        |        |        | Go To  |        |        |        |        |        |");
    printf("\n\t | 10 stp |        |        |        | box 11 |        |        |        |        |        |");
    printf("\n\t |   %d   |   %d   |   %d   |   %d   |  %d    |   %d   |   %d   |  %d    |  %d    |   %d   |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |________|________|________|________|________|________|________|________|________|________|");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |   %d   |   %d   |   %d   |   %d   |  %d    |   %d   |   %d   |   %d   |   %d   |   %d   |",21,22,23,24,25,26,27,28,29,30);
    printf("\n\t |________|________|________|________|________|________|________|________|________|________|");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |   %d   |   %d   |   %d   |   %d   |  %d    |   %d   |   %d   |   %d   |   %d   |   %d   |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |________|________|________|________|________|________|________|________|________|________|");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |        |        |        |        |        |        |        |        |        |        |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |  %d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |________|________|________|________|________|________|________|________|________|________|");
    printf("\n");
}

*/
int main(){
    char mode,yes='y';
    int numply,start;
    printf("   HEY! Which mode do you prefer");
    printf("\n\n   Single or Multi player??");
    printf("\n   Press 's' for single and 'm' for multi : ");
    scanf(" %c",&mode);
    if(mode!='s' && mode!='m' && mode!='S' && mode!='M'){
       printf("\n\n   YOU TYPE A WRONG ALPHABET,TRY IT AGAIN LATER!!");
    }else if(mode=='s' || mode=='S'){
        printf("\n   WELCOME TO OUR GAME !");
        printf("\n   Who gonna starts first : ");
        printf("\n   Press 1 stands for you and 2 stands for computer : ");
        scanf("%d",&start);
    }else if(mode=='m' || mode=='M'){
        while(yes=='y'){
        printf("   How many player do you want(max 3)     : ");
        scanf("%d",&numply);
        if(numply<=3){
           printf("   WELCOME TO OUR GAME");
           break;
        }else{
            printf("   ERROR !!");
            printf("\n   Do you want to try again : ");
            scanf(" %c",&yes);
        }
    }
}
}

