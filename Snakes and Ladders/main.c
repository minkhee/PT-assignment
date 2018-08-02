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
  int counter=0, movement=0, dice, limit, board, position_x=0, space_x=-1, times=0, position_y=0, space_y=-1, pause_x=0, pause_y=0;
    char x[50] = {};
    char y[50] = {};

 for(board=0; board<=times; board++){//Counter that will keep adding one everytime enter is pressed
    printf("PRESS ENTER:");
    times++;//Will plus one whenever enter is pressed
    if(board%2==0){//To determine whether its x or y turn
    getchar();
    srand(time(0));
    dice=(rand()%6)+1;
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        position_x++;//The position of the player X
        space_x++;//The empty spaces before the player position of X
        if(pause_x!=0 && position_x==31){//Conditions to ensure X remains in space 32 while still in pause
            pause_x--;
            position_x=30;
            space_x=29;
        }else if(pause_x!=0 && position_x==2){//Conditions to ensure X remains in Space 2 while still in pause
            pause_x--;
            position_x=1;
            space_x=0;
        }
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                  x[space_x]=' ';
                }else{//Conditions for printing position of player X
                    x[position_x]='X';
            }
            }
    printf("BOARD %d \n", board);
    printf("ACROSS %d \n", ACROSS);
    printf("TIMES %d \n", times);
    printf("COUNTER %d \n", counter);
    printf("PAUSE %d \n", pause_x);
    printf("positionx %d \n", position_x);
    printf("spacex %d \n", space_x );
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
        if((ACROSS==(dice-1)) && position_x==17){//When X lands on space 18 X will jump to space 40 then move back 10 spaces
             x[17]=' ';
             x[16]=' ';
             x[29]='X';
             position_x=29;
             space_x=28;
             printf("\t                               YOU JUMP TO SPACE 40, THEN MOVE BACK 10 SPACES, YOU ARE NOW ON SPACE 30\n");
             Sleep(1500);
             break;
        }else if((ACROSS==(dice-1)) && position_x==7){//When X lands on space 8 X will go back 3 spaces
                x[7]= ' ';
                x[6]= ' ';
                x[4]= 'X';
                position_x=4;
                space_x=3;
                printf("\t                                YOU MOVED BACK 3 SPACES, YOU ARE NOW ON SPACE 5 \n");
                Sleep(1000);
                break;
            }else if((ACROSS==(dice-1)) && position_x==21){//When X lands on space 22 X will jump to space 33
                    x[20]=' ';
                    x[21]=' ';
                    x[32]='X';
                    position_x=32;
                    space_x=31;
                    printf("\t                                YOU ARE NOW ON SPACE 33 \n");
                    Sleep(1000);
                    break;
                }else if((ACROSS==(dice-1)) && position_x==35){//When X lands on space 36 X will go back to space 11
                        x[35]=' ';
                        x[10]='X';
                        position_x=10;
                        space_x=9;
                        printf("\t                             YOU ARE NOW ON SPACE 11 \n");
                        Sleep(1000);
                        break;
                    }else if((ACROSS==(dice-1)) && position_x==39){//When X lands on space 40 X will go back 10 spaces
                            x[39]=' ';
                            x[29]='X';
                            position_x=29;
                            space_x=28;
                            printf("\t                              YOU MOVED BACK 10 SPACES, YOU ARE NOW ON SPACE 30 \n");
                            Sleep(1000);
                            break;
                        }else if((ACROSS==(dice-1)) && position_x==40){//When X lands on space 41 X will jump to space 49
                                x[48]='X';
                                position_x=48;
                                space_x=47;
                                printf("\t                              YOU ARE NOW ON SPACE 49 \n");
                                Sleep(1000);
                                break;
                            }else if((ACROSS==(dice-1)) && position_x==47){//When X lands on space 48 it will go back to space 1
                                    x[47]=' ';
                                    x[0]='X';
                                    position_x=0;
                                    space_x=-1;
                                    printf("\t                               OH NO, YOU LANDED ON 48, YOU ARE NOW BACK ON SPACE 1 \n");
                                    Sleep(1000);
                                    break;
                                }else if((ACROSS==(dice-1)) && position_x==30){//When X lands on 31 it will pause for 2 turns
                                        pause_x=3;
                                    }else if((ACROSS==(dice-1)) && position_x==1){//When Y lands on 2 it will pause for 1 turn
                                            pause_x=2;
                                    }
              if(pause_x!=0 && position_x==30){
                printf("\t                                  YOU HAVE TO WAIT FOR %d TURNS", pause_x-1);
                Sleep(1000);
                break;
                }else if(pause_x!=0 && position_x==1){
                    printf("\t                                  YOU HAVE TO WAIT FOR 1 TURN");
                    Sleep(1000);
                    break;
                }

        if(position_x==49 && space_x==48 && board<times){//When X reaches space 50 X wins
            printf("\t                                             YOU WIN!!!!!!");
            return 0;
            }
        }
    }

 if(board%2==1){//To determine whether its x or y turn
    srand(time(0));
    dice=(rand()%6)+1;
    Sleep(300);
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        position_y++;//The position of  player Y
        space_y++;//The empty spaces before the player position of Y
        system("cls");//To refresh the screen
    if(pause_y!=0 && position_y==31){//This is to ensure that Y will remain in the space while in pause
        pause_y--;
        position_y=30;
        space_y=29;
        }else if(pause_y!=0 && position_y==2){//This is to ensure that Y will remain in the space while in pause
            pause_y--;
            position_y=1;
            space_y=0;
            }
        for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                    y[space_y]=' ';
                }else{//Conditions for printing position of player y
                    y[position_y]='Y';
            }
        }
    printf("BOARD %d \n", board);
    printf("ACROSS %d \n", ACROSS);
    printf("TIMES %d \n", times);
    printf("COUNTER %d \n", counter);
    printf("PAUSE %d \n", pause_y);
    printf("positiony %d \n", position_y);
    printf("spacey %d \n", space_y);
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
        Sleep(500);
    if((ACROSS==(dice-1)) && position_y==17){//when Y lands on space 18 Y will jump to 40 then reverse 10 spaces
        y[17]=' ';
        y[16]=' ';
        y[29]='Y';
        position_y=29;
        space_y=28;
        printf("\t                               COM SKIP TO SPACE 40, THEN MOVE BACK 10 SPACES, COM IS NOW ON SPACE 30 \n");
        Sleep(1500);
        break;
        }else if((ACROSS==(dice-1)) && position_y==7){//when Y lands on space 8 Y will reverse 3 spaces
                y[7]=' ';
                y[4]= 'Y';
                position_y=4;
                space_y=3;
                printf("\t                                COM MOVED BACK 3 SPACES, COM IS NOW ON SPACE 5 \n");
                Sleep(1000);
                break;
            }else if((ACROSS==(dice-1)) && position_y==21){//when Y lands on space 22 Y will jump to space 33
                    y[20]=' ';
                    y[21]=' ';
                    y[32]='Y';
                    position_y=32;
                    space_y=31;
                    printf("\t                                COM IS NOW ON SPACE 33 \n");
                    Sleep(1000);
                    break;
                }else if((ACROSS==(dice-1)) && position_y==35){//when Y lands on space 36 Y will go back to space 11
                      y[35]=' ';
                      y[10]='Y';
                      position_y=10;
                      space_y=9;
                      printf("\t                             COM IS NOW ON SPACE 11 \n");
                      Sleep(1000);
                      break;
                    }else if((ACROSS==(dice-1)) && position_y==39){//when Y lands on space 40 Y will reverse 10 space
                        y[39]=' ';
                        y[29]='Y';
                        position_y=29;
                        space_y=28;
                        printf("\t                              COM MOVED BACK 10 SPACES, COM IS NOW ON SPACE 30 \n");
                        Sleep(1000);
                        break;
                        }else if((ACROSS==(dice-1)) && position_y==40){//when Y lands on space 41 Y jump to space 49
                            y[48]='Y';
                            position_y=48;
                            space_y=47;
                            printf("\t                              COM IS NOW ON SPACE 49 \n");
                            Sleep(1000);
                            break;
                            }else if((ACROSS==(dice-1)) && position_y==47){// when Y lands on space 48 Y will go back to space 1
                                y[47]=' ';
                                y[0]='Y';
                                position_y=0;
                                space_y=-1;
                                printf("\t                               YEAH, COM LANDED ON 48, COM IS NOW BACK ON SPACE 1\n");
                                Sleep(1000);
                                break;
                                }else if((ACROSS==(dice-1)) && position_y==30){//when Y lands on space 31 Y will pause for 2 turns
                                    pause_y=3;
                                    }else if((ACROSS==(dice-1)) && position_y==1){//when Y lands on space 2 Y will pause for 1 turn
                                        pause_y=2;
                                }
              if(pause_y!=0 && position_y==30){
                printf("\t                                 COM HAS TO WAIT FOR %d TURNS \n", pause_y-1);
                Sleep(1000);
                break;
                    }else if(pause_y!=0 && position_y==1){
                        printf("\t                                  COM HAS TO WAIT FOR 1 TURN \n");
                        Sleep(1000);
                        break;
                    }
                if(position_y==49 && space_y==48 && board<times){//When Y lands on space 50 Y wins
                    printf("\t                                        COM WIN!!!!!!");
                    return 0;
                }
            }
        }
    }
}
