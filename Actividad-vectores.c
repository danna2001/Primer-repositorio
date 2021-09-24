#include <stdio.h>



void runArrayNumbers(){
int arrayNumbers[5];
printf("Ingrese 5 numeros\n"); 

int numberOne;
    scanf("%d", &numberOne);
int numberTwo;
    scanf("%d", &numberTwo);
int numberThree;
    scanf("%d", &numberThree);
int numberFour;
    scanf("%d", &numberFour);
int numberFive;
    scanf("%d", &numberFive);


arrayNumbers[0]= numberOne;
arrayNumbers[1]= numberTwo;
arrayNumbers[2]= numberThree;
arrayNumbers[3]= numberFour;
arrayNumbers[4]= numberFive;


for (int i=0; i<5; i++){
     printf("\n %d ",arrayNumbers[i]);
     if ( arrayNumbers[i] % 2 == 0 ){
         printf ("Par");}
    else printf("Impar");}
}


int main(){
    printf("Bienvenido este programa verifica si un numero es par o impar \n");
    runArrayNumbers();
return 0; 
}
