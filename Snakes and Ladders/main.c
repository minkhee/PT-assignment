#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main()
{ int a=0, b=0, counter=0, number[5][10]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,
30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};



for(counter=4; counter>=0; counter--){
if(counter%2==0){
    for(b=0; b<10; b++){
        printf("%d    ", number[counter][b]);
        Sleep(500);
        }
    }else if(counter%2==1){
     for(b=9; b>=0; b--){
          printf("%d    ", number[counter][b]);
          Sleep(500);
   }
 }
 printf("\n");
}







    return 0;
}
