#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define COLUMN 10
#define ROW 5

void main(){
    printf("                        \====================================\n");
    printf("                        =~ Welcome to Snakes and Ladders ~ = \n");
    printf("                        \====================================\n\n\n");


    int row , col ,idx,i,j;
    int counter=50;



    for(row=0;row<ROW;row++){
        for (col=0;col<COLUMN;col++){
        printf("+--------");}//first horizontal row
        printf("+\n");

            switch (row){   //assigning which row will be odd or even
        case 0:
            counter = 41; break;
        case 1:
            counter = 40; break;
        case 2:
            counter = 21; break;
        case 3:
            counter = 20; break;
        case 4:
            counter = 1; break;
        }

        for(idx=0; idx<10;idx++){
            switch(row%2==0){
        case 0:
             printf("|   %2d   ", counter--); //odd rows - reverse
             break;
        case 1:
             printf("|   %2d   ", counter++); //even rows - forward
             break;}
        if(idx==9){ //last vertical line
            printf("|\n");
        }
        }



        for(i=0;i<5;i++){ // how tall the boxes
            for(j=0;j<10;j++){ // how many boxes
                printf("|        ");
            }
            printf("|\n");
        }



        for(col=0;col<COLUMN;col++){//bottom lines
            printf("+--------");
        }
            printf("+\n");
    }
               if ((row == 1) && (col == 10)){
                printf("WIN!");
               }



        if ((row == 0 && col == 10)){
                printf("WIN!");}





}
