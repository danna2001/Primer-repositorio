#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include "gameCore.c"
#include "guessNumber.c"
#include "alphabetSoup.c"
#include "guessWord.c"


int main(){
    printf("\nBienvenido\n");
   
    menu();
    
    while(1){
    
    int optionEntered= requestAnswer("Respuesta del usuario");

    if (optionEntered==1){guessNumber();} 
    if (optionEntered==2){alphabetSoup();}
    if (optionEntered==3){guessWord();}
    if (optionEntered==4) {exit(0);}
    }
  
return 0;
}




