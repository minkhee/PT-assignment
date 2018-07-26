#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main()
{ int a=0, b=0, counter=0, number[5][10]={};




for(counter=0; counter<5; counter++){
if(counter%2==0){
  for(a=4; a>=0; a--){
    for(b=0; b<10; b++){
        printf("%d    ", number[a][b]);
        }printf("\n");
    }
}else if(counter%2==1){
   for(a=4; a>=0; a--){
     for(b=9; b>=0; b--){
          printf("%d    ", number[a][b]);
      }
   }
 } printf("\n");
}







    return 0;
}
