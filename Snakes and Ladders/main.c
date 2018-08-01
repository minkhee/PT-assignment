#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main()
{int finish;
    displayboard1();

    return 0;
}

void displayboard1(int ACROSS, int UPDOWN)
{
  int counter=0, movement=0, dice, limit, board, positionx=0, spacex=-1, times=0, positiony=0, spacey=-1;
    char x[50] = {};
    char y[50] = {};

 for(board=0; board<=times; board++){//Counter that will keep plus one everytime enter is pressed
    printf("PRESS ENTER:");
    times++;//Will plus one whenever enter is pressed
    if(board%2==0){//To determine whether its x or y turn
    getchar();
    srand(time(0));
    dice=(rand()%6)+1;
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionx++;//The position of the player
        spacex++;//The empty spaces before the player position
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                x[spacex]=' ';
                }else{//Conditions for printing position of player
                    x[positionx]='X';
            }
            }
    printf("positionx %d \n", positionx);
    printf("spacex %d \n", spacex );
    printf("\n\t  _________ _________ _________ _________ _________ _________ _________ _________ _________ _________ ");
    printf("\n\t | GO  TO  |         |         |         |         |         |         |  GO TO  |         |         |");
    printf("\n\t | BOX 49  |         |         |         |         |         |         |  BOX 1  |         |  WIN!   |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |" ,x[40],y[40],x[41],y[41],x[42],
           y[42],x[43],y[43],x[44],y[44],x[45],y[45],x[46],y[46],x[47],y[47],x[48],y[48],x[49],y[49]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |   REV   |         |         |         |  GO TO  |         |         |         |         |  PAUSE  |");
    printf("\n\t |  10STEP |         |         |         |  BOX 11 |         |         |         |         | 2 TURNS |");
    printf("\n\t |    %d   |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[39],y[39],x[38],y[38],x[37],
           y[37],x[36],y[36],x[35],y[35],x[34],y[34],x[33],y[33],x[32],y[32],x[31],y[31],x[30],y[30]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  GO TO  |         |         |         |         |         |         |         |         |");
    printf("\n\t |         |  BOX 33 |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[20],y[20],x[21],y[21],x[22],
           y[22],x[23],y[23],x[24],y[24],x[25],y[25],x[26],y[26],x[27],y[27],x[28],y[28],x[29],y[29]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |         |  GO TO  |         |         |         |         |         |         |         |");
    printf("\n\t |         |         |  BOX 40 |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[19],y[19],x[18],y[18],x[17],
           y[17],x[16],y[16],x[15],y[15],x[14],y[14],x[13],y[13],x[12],y[12],x[11],y[11],x[10],y[10]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  PAUSE  |         |         |         |         |         |   REV   |         |         |");
    printf("\n\t |         |  1 TURN |         |         |         |         |         |  3 STEP |         |         |");
    printf("\n\t |  %2d     |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[0],y[0],x[1],y[1],x[2],y[2],
           x[3],y[3],x[4],y[4],x[5],y[5],x[6],y[6],x[7],y[7],x[8],y[8],x[9],y[9]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t                                             YOU GOT %d", dice);
    printf("\n");
        Sleep(500);
        if(positionx==49 && spacex==48 && board<times){
            printf("\t                                        YOU WIN!!!!!!");
            return 0;
        }
    }
        }
        if(board%2==1){//To determine whether its x or y turn
        srand(time(0));
        dice=(rand()%6)+1;
        for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positiony++;//The position of the player
        spacey++;//The empty spaces before the player position
        system("cls");//To refresh the screen
        for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                y[spacey]=' ';
                }else{//Conditions for printing position of player
                    y[positiony]='Y';
            }
        }
   printf("positiony %d \n", positiony);
    printf("spacey %d \n", spacey );
    printf("\n\t  _________ _________ _________ _________ _________ _________ _________ _________ _________ _________ ");
    printf("\n\t | GO  TO  |         |         |         |         |         |         |  GO TO  |         |         |");
    printf("\n\t | BOX 49  |         |         |         |         |         |         |  BOX 1  |         |  WIN!   |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |" ,x[40],y[40],x[41],y[41],x[42],
           y[42],x[43],y[43],x[44],y[44],x[45],y[45],x[46],y[46],x[47],y[47],x[48],y[48],x[49],y[49]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |   REV   |         |         |         |  GO TO  |         |         |         |         |  PAUSE  |");
    printf("\n\t |  10STEP |         |         |         |  BOX 11 |         |         |         |         | 2 TURNS |");
    printf("\n\t |    %d   |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[39],y[39],x[38],y[38],x[37],
           y[37],x[36],y[36],x[35],y[35],x[34],y[34],x[33],y[33],x[32],y[32],x[31],y[31],x[30],y[30]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  GO TO  |         |         |         |         |         |         |         |         |");
    printf("\n\t |         |  BOX 33 |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[20],y[20],x[21],y[21],x[22],
           y[22],x[23],y[23],x[24],y[24],x[25],y[25],x[26],y[26],x[27],y[27],x[28],y[28],x[29],y[29]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |         |  GO TO  |         |         |         |         |         |         |         |");
    printf("\n\t |         |         |  BOX 40 |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[19],y[19],x[18],y[18],x[17],
           y[17],x[16],y[16],x[15],y[15],x[14],y[14],x[13],y[13],x[12],y[12],x[11],y[11],x[10],y[10]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  PAUSE  |         |         |         |         |         |   REV   |         |         |");
    printf("\n\t |         |  1 TURN |         |         |         |         |         |  3 STEP |         |         |");
    printf("\n\t |  %2d     |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |   %c %c   |",x[0],y[0],x[1],y[1],x[2],y[2],
           x[3],y[3],x[4],y[4],x[5],y[5],x[6],y[6],x[7],y[7],x[8],y[8],x[9],y[9]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t                                             COM GOT %d", dice);
    printf("\n");
        Sleep(500);//conditions for printing space
        if(positiony==49 && spacey==48 && board<times){
            printf("\t                                        COM WIN!!!!!!");
            return 0;
        }


}
}
}
}
