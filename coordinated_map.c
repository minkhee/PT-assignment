#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


int main (){

    displayboard();

    return 0;
}


void displayboard(int ACROSS, int UPDOWN)
{
    int counter=0;
    char x[50] = {};
    char y[50] = {};
    char o[50] = {};
    char space[49];

for(ACROSS=0; ACROSS<50; ACROSS++){
        system("cls");
    for(UPDOWN=0; UPDOWN<50; UPDOWN++){
        for(counter=0; counter<50; counter++){
        if(counter<ACROSS && counter<UPDOWN){
        x[counter]=' ';
        y[counter]=' ';
        o[counter]=' ';
        }else if(counter==ACROSS && counter==UPDOWN){
            x[counter]= 'X';
            y[counter]= 'Y';
            o[counter]= 'O';
        }
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
    printf("\n\t |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |   %d    |",21,22,23,24,25,26,27,28,29,30);
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
    printf("\n");
        Sleep(500);
    }
}


