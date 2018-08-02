#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


int main (){
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
        displayboard1();
    }else if(mode=='m' || mode=='M'){
        while(yes=='y'){
        printf("   How many player do you want, 2 or 3     : ");
        scanf("%d",&numply);
        if(numply==2){
            displayboard2();
            break;
        }
        if(numply==3){
         displayboard3();
           break;
        }else{
            printf("   ERROR !!");
            printf("\n   Do you want to try again : ");
            scanf(" %c",&yes);
        }
    }
}
    return 0;
}

void displayboard1(int ACROSS, int UPDOWN)
{
  int counter=0, movement=0, dice, limit, board, positionX=0, spaceX=-1, times=0, positionY=0, spaceY=-1;
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
        positionX++;//The position of the player
        spaceX++;//The empty spaces before the player position
        system("cls");//To refresh the screen
        void teleport_x();
        void teleport_y();
        void reverse_x();
        void reverse_y();
        void pause();
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                x[spaceX]=' ';
                }else{//Conditions for printing position of player
                    x[positionX]='X';
            }
            }
    printf("positionx %d \n", positionX);
    printf("spacex %d \n", spaceX );
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
        if(positionX==49 && spaceX==48 && board<times){
            printf("\t                                        YOU WIN!!!!!!");
            return 0;
        }
    }
        }
        if(board%2==1){//To determine whether its x or y turn
        srand(time(0));
        dice=(rand()%6)+1;
        for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionY++;//The position of the player
        spaceY++;//The empty spaces before the player position
        system("cls");//To refresh the screen
        for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                y[spaceY]=' ';
                }else{//Conditions for printing position of player
                    y[positionY]='Y';
            }
        }
   printf("positiony %d \n", positionY);
    printf("spacey %d \n", spaceY );
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
        if(positionY==49 && spaceY==48 && board<times){
            printf("\t                                        COM WIN, BETTER LUCK NEXT TIME");
            return 0;
                }
            }
        }
    }
 }


void displayboard2(int ACROSS, int UPDOWN)
{
  int counter=0, movement=0, dice, limit, board, positionX=0, spaceX=-1, times=0, positionY=0, spaceY=-1;
    char x[50] = {};
    char y[50] = {};

 for(board=0; board<=times; board++){//Counter that will keep plus one everytime enter is pressed
    printf("PRESS ENTER:");
    times++;//Will plus one whenever enter is pressed
    getchar();
    srand(time(0));
    dice=(rand()%6)+1;
    if(board%2==0){//To determine whether its x or y turn
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionX++;//The position of the player
        spaceX++;//The empty spaces before the player position
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                x[spaceX]=' ';
                }else{//Conditions for printing position of player
                    x[positionX]='X';
            }
            }
    printf("positionx %d \n", positionX);
    printf("spacex %d \n", spaceX );
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
    printf("\n\t                                             X GOT %d", dice);
    printf("\n");
        Sleep(500);
        if(positionX==49 && spaceX==48 && board<times){
            printf("\t                                        X WINS!!!!!!");
            return 0;
        }
    }
        }
        if(board%2==1){//To determine whether its x or y turn
        for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionY++;//The position of the player
        spaceY++;//The empty spaces before the player position
        system("cls");//To refresh the screen
        for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                y[spaceY]=' ';
                }else{//Conditions for printing position of player
                    y[positionY]='Y';
            }
        }
   printf("positiony %d \n", positionY);
    printf("spacey %d \n", spaceY );
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
    printf("\n\t                                             Y GOT %d", dice);
    printf("\n");
        Sleep(500);//conditions for printing space
        if(positionY==49 && spaceY==48 && board<times){
            printf("\t                                        Y WINS!!!!!!");
            return 0;
                }
            }
        }
    }
}

void displayboard3(int ACROSS, int UPDOWN)
{
    int counter=0, movement=0, dice, limit, board, positionX=0, spaceX=-1, positionY=0, spaceY=-1, positionO=0, spaceO=-1, times=0;
    char x[50] = {};
    char y[50] = {};
    char o[50] = {};

 for(board=0; board<=times; board++){//Counter that will keep plus one everytime enter is pressed
    printf("PRESS ENTER:");
    times++;//Will plus one whenever enter is pressed
    getchar();
    srand(time(0));
    dice=(rand()%6)+1;

    if(board%3==0){//To determine whether its x or y turn
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionX++;//The position of the player
        spaceX++;//The empty spaces before the player position
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                x[spaceX]=' ';
                }else{//Conditions for printing position of player
                    x[positionX]='X';
            }
        }
    printf("\n\t  _________ _________ _________ _________ _________ _________ _________ _________ _________ _________ ");
    printf("\n\t | GO  TO  |         |         |         |         |         |         |  GO TO  |         |         |");
    printf("\n\t | BOX 49  |         |         |         |         |         |         |  BOX 1  |         |  WIN!   |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |" ,x[40],y[40],o[40],x[41],y[41],o[41],x[42],y[42],
           o[42],x[43],y[43],o[43],x[44],y[44],o[44],x[45],y[45],o[45],x[46],y[46],o[46],x[47],y[47],o[47],x[48],y[48],o[48],x[49],y[49],o[49]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |   REV   |         |         |         |  GO TO  |         |         |         |         |  PAUSE  |");
    printf("\n\t |  10STEP |         |         |         |  BOX 11 |         |         |         |         | 2 TURNS |");
    printf("\n\t |    %d   |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[39],y[39],o[39],x[38],y[38],o[38],x[37],y[37],
           o[37],x[36],y[36],o[36],x[35],y[35],o[35],x[34],y[34],o[34],x[33],y[33],o[33],x[32],y[32],o[32],x[31],y[31],o[31],x[30],y[30],o[30]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  GO TO  |         |         |         |         |         |         |         |         |");
    printf("\n\t |         |  BOX 33 |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30, dice);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[20],y[20],o[20],x[21],y[21],o[21],x[22],y[22],
           o[22],x[23],y[23],o[23],x[24],y[24],o[24],x[25],y[25],o[25],x[26],y[26],o[26],x[27],y[27],o[27],x[28],y[28],o[28],x[29],y[29],o[29]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |         |  GO TO  |         |         |         |         |         |         |         |");
    printf("\n\t |         |         |  BOX 40 |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[19],y[19],o[19],x[18],y[18],o[18],x[17],y[17],
           o[17],x[16],y[16],o[16],x[15],y[15],o[15],x[14],y[14],o[14],x[13],y[13],o[13],x[12],y[12],o[12],x[11],y[11],o[11],x[10],y[10],o[10]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  PAUSE  |         |         |         |         |         |   REV   |         |         |");
    printf("\n\t |         |  1 TURN |         |         |         |         |         |  3 STEP |         |         |");
    printf("\n\t |  %2d     |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[0],y[0],o[0],x[1],y[1],o[1],x[2],y[2],o[2],
           x[3],y[3],o[3],x[4],y[4],o[4],x[5],y[5],o[5],x[6],y[6],o[6],x[7],y[7],o[7],x[8],y[8],o[8],x[9],y[9],o[9]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t                                             X GOT A %d", dice);
    printf("\n");
        Sleep(250);//To let the player see movement
        if(positionX==49 && spaceX==48 && board<times){
            printf("\t                                        X WINS!!!!!!");
            return 0;
                }
            }
        }
    if(board%3==1){//To determine whether its x or y turn
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionY++;//The position of the player
        spaceY++;//The empty spaces before the player position
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                y[spaceY]=' ';
                }else{//Conditions for printing position of player
                    y[positionY]='Y';
            }
        }
    printf("\n\t  _________ _________ _________ _________ _________ _________ _________ _________ _________ _________ ");
    printf("\n\t | GO  TO  |         |         |         |         |         |         |  GO TO  |         |         |");
    printf("\n\t | BOX 49  |         |         |         |         |         |         |  BOX 1  |         |  WIN!   |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |" ,x[40],y[40],o[40],x[41],y[41],o[41],x[42],y[42],
           o[42],x[43],y[43],o[43],x[44],y[44],o[44],x[45],y[45],o[45],x[46],y[46],o[46],x[47],y[47],o[47],x[48],y[48],o[48],x[49],y[49],o[49]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |   REV   |         |         |         |  GO TO  |         |         |         |         |  PAUSE  |");
    printf("\n\t |  10STEP |         |         |         |  BOX 11 |         |         |         |         | 2 TURNS |");
    printf("\n\t |    %d   |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[39],y[39],o[39],x[38],y[38],o[38],x[37],y[37],
           o[37],x[36],y[36],o[36],x[35],y[35],o[35],x[34],y[34],o[34],x[33],y[33],o[33],x[32],y[32],o[32],x[31],y[31],o[31],x[30],y[30],o[30]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  GO TO  |         |         |         |         |         |         |         |         |");
    printf("\n\t |         |  BOX 33 |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30, dice);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[20],y[20],o[20],x[21],y[21],o[21],x[22],y[22],
           o[22],x[23],y[23],o[23],x[24],y[24],o[24],x[25],y[25],o[25],x[26],y[26],o[26],x[27],y[27],o[27],x[28],y[28],o[28],x[29],y[29],o[29]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |         |  GO TO  |         |         |         |         |         |         |         |");
    printf("\n\t |         |         |  BOX 40 |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[19],y[19],o[19],x[18],y[18],o[18],x[17],y[17],
           o[17],x[16],y[16],o[16],x[15],y[15],o[15],x[14],y[14],o[14],x[13],y[13],o[13],x[12],y[12],o[12],x[11],y[11],o[11],x[10],y[10],o[10]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  PAUSE  |         |         |         |         |         |   REV   |         |         |");
    printf("\n\t |         |  1 TURN |         |         |         |         |         |  3 STEP |         |         |");
    printf("\n\t |  %2d     |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[0],y[0],o[0],x[1],y[1],o[1],x[2],y[2],o[2],
           x[3],y[3],o[3],x[4],y[4],o[4],x[5],y[5],o[5],x[6],y[6],o[6],x[7],y[7],o[7],x[8],y[8],o[8],x[9],y[9],o[9]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t                                             Y ROLLED A %d", dice);
    printf("\n");
        Sleep(250);//To let the player see movement
        if(positionY==49 && spaceY==48 && board<times){
            printf("\t                                        Y WINS!!!!!!");
            return 0;
                }
            }
        }
    if(board%3==2){//To determine whether its x or y turn
    for(ACROSS=0; ACROSS<dice; ACROSS++){//Counter that will run until it reaches the value of dice
        positionO++;//The position of the player
        spaceO++;//The empty spaces before the player position
        system("cls");//To refresh the screen
            for(counter=0; counter<50; counter++){
               if(counter==ACROSS){//conditions for printing space
                o[spaceO]=' ';
                }else{//Conditions for printing position of player
                    o[positionO]='O';
            }
        }
    printf("\n\t  _________ _________ _________ _________ _________ _________ _________ _________ _________ _________ ");
    printf("\n\t | GO  TO  |         |         |         |         |         |         |  GO TO  |         |         |");
    printf("\n\t | BOX 49  |         |         |         |         |         |         |  BOX 1  |         |  WIN!   |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",41,42,43,44,45,46,47,48,49,50);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |" ,x[40],y[40],o[40],x[41],y[41],o[41],x[42],y[42],
           o[42],x[43],y[43],o[43],x[44],y[44],o[44],x[45],y[45],o[45],x[46],y[46],o[46],x[47],y[47],o[47],x[48],y[48],o[48],x[49],y[49],o[49]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |   REV   |         |         |         |  GO TO  |         |         |         |         |  PAUSE  |");
    printf("\n\t |  10STEP |         |         |         |  BOX 11 |         |         |         |         | 2 TURNS |");
    printf("\n\t |    %d   |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",40,39,38,37,36,35,34,33,32,31);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[39],y[39],o[39],x[38],y[38],o[38],x[37],y[37],
           o[37],x[36],y[36],o[36],x[35],y[35],o[35],x[34],y[34],o[34],x[33],y[33],o[33],x[32],y[32],o[32],x[31],y[31],o[31],x[30],y[30],o[30]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  GO TO  |         |         |         |         |         |         |         |         |");
    printf("\n\t |         |  BOX 33 |         |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30, dice);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[20],y[20],o[20],x[21],y[21],o[21],x[22],y[22],
           o[22],x[23],y[23],o[23],x[24],y[24],o[24],x[25],y[25],o[25],x[26],y[26],o[26],x[27],y[27],o[27],x[28],y[28],o[28],x[29],y[29],o[29]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |         |  GO TO  |         |         |         |         |         |         |         |");
    printf("\n\t |         |         |  BOX 40 |         |         |         |         |         |         |         |");
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",20,19,18,17,16,15,14,13,12,11);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[19],y[19],o[19],x[18],y[18],o[18],x[17],y[17],
           o[17],x[16],y[16],o[16],x[15],y[15],o[15],x[14],y[14],o[14],x[13],y[13],o[13],x[12],y[12],o[12],x[11],y[11],o[11],x[10],y[10],o[10]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t |         |  PAUSE  |         |         |         |         |         |   REV   |         |         |");
    printf("\n\t |         |  1 TURN |         |         |         |         |         |  3 STEP |         |         |");
    printf("\n\t |  %2d     |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |   %2d    |",1,2,3,4,5,6,7,8,9,10);
    printf("\n\t |         |         |         |         |         |         |         |         |         |         |");
    printf("\n\t |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |  %c %c %c  |",x[0],y[0],o[0],x[1],y[1],o[1],x[2],y[2],o[2],
           x[3],y[3],o[3],x[4],y[4],o[4],x[5],y[5],o[5],x[6],y[6],o[6],x[7],y[7],o[7],x[8],y[8],o[8],x[9],y[9],o[9]);
    printf("\n\t |_________|_________|_________|_________|_________|_________|_________|_________|_________|_________|");
    printf("\n\t                                             O ROLLED A %d", dice);
    printf("\n");
        Sleep(250);//To let the player see movement
        if(positionO==49 && spaceO==48 && board<times){
            printf("\t                                        O WINS!!!!!!");
            return 0;
                }
            }
        }
    }
}

void teleport_x(int positionX){
    switch(positionX){
    case 8:
        return 5;break;
    case 18 :
        return 40;break;
    case 22:
        return 33;break;
    case 36 :
        return 11;break;
    case 40 :
        return 30;break;
    case 41 :
        return 49;break;
    case 48 :
        return 1 ;break;
    }
    return 0;
}

void teleport_y(int positionY){
    switch(positionY){
    case 8:
        return 5;break;
    case 18 :
        return 40;break;
    case 22:
        return 33;break;
    case 36 :
        return 11;break;
    case 40 :
        return 30;break;
    case 41 :
        return 49;break;
    case 48 :
        return 1 ;break;
    }
    return 0;
}

void teleport_o(int positionO){
    switch(positionO){
    case 8:
        return 5;break;
    case 18 :
        return 40;break;
    case 22:
        return 33;break;
    case 36 :
        return 11;break;
    case 40 :
        return 30;break;
    case 41 :
        return 49;break;
    case 48 :
        return 1 ;break;
    }
    return 0;
}


void reverse_x()
{int x;
    int positionX=1;

    if(positionX==8){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==18){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==22){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==36){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==40){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==41){
        x=teleport(positionX);
        positionX=x;
    }else if(positionX==48){
        x=teleport(positionX);
        positionX=x;
    }

}

void reverse_y()
{int y;
    int positionY=1;

    if(positionY==8){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==18){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==22){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==36){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==40){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==41){
        y=teleport(positionY);
        positionY=y;
    }else if(positionY==48){
        y=teleport(positionY);
        positionY=y;
    }

}

void reverse_o()
{   int o;
    int positionO=1;

    if(positionO==8){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==18){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==22){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==36){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==40){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==41){
        o=teleport(positionO);
        positionO=o;
    }else if(positionO==48){
        o=teleport(positionO);
        positionO=o;
    }

}

void pause(int positionX,int positionY,int buffer_x,int buffer_y,int pause_x,int pause_y){
if((positionX==2)&&(buffer_x==0)){     //PAUSE FOR first player

        pause_x=1;
        buffer_x=1;
    }else if(positionX==31&&buffer_x==0){
        pause_x=2;
        buffer_x=1;
    }else
if(positionY==2&&buffer_y==0){   //PAUSE FOR second player
        pause_y=1;
        buffer_y=1;
    }else  if(positionY==31&&buffer_y==0){
        pause_y=2;
        buffer_y=1;
    }else
if(positionX==2&&buffer_x==0&&positionY==2&&buffer_y==0){     //PAUSE FOR third player
        pause_x=1;
        buffer_x=1;
        pause_y=1;
        buffer_y=1;
    }else if(positionX==31&&buffer_x==0&&positionY==31&&buffer_y==0){
        pause_x=2;
        buffer_x=1;
        pause_y=2;
        buffer_y=1;
    }

}

