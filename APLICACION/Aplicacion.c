#include <stdio.h>
#include <string.h>
#include<time.h>
#include <stdlib.h>

void menu(){
printf ("¿Que deseas jugar?\n");   
   

        printf( "\n   1.Adivina un numero");
        printf( "\n   2. ");
        printf( "\n   3. " );
        printf( "\n   4. Salir." );
    
}
int requestAnswer(char* answerEntered){
    printf( "\n\n   Introduzca una opcion (1-4): " );
    int option;
    scanf("%d", &option);
    return option;
}


void guessNumber(){

srand(time(NULL));
int randomNumber = rand()%10;
int answer;
int maximumAttempts=3;
int i=0;
int question;
printf("\n Hola");
printf("\nHe seleccionado un numero al azar entre 0 y 10, tu tarea es adivinarlo en 3 intentos");
while(1){
    i++;
printf("\nEscribe el numero que crees que elegi: ");
    scanf("%d", &answer);
if (randomNumber < answer){
printf("\n Error, pero te doy una pista: el numero que elegi es menor que %d\n",answer);}
else if (randomNumber > answer){
printf("\n Error, pero te doy una pista: el numero que elegi es mayor que %d\n",answer);}
else  {
      printf("Correcto. El numero que seleccione fue %d\n",answer);
      break; }
if (i >= maximumAttempts) {
      printf("Perdiste. El numero que seleccione fue %d",randomNumber);
      break;}
      

}
    

int main(){
    printf("Bienvenido\n");
    menu();
    int optionEntered= requestAnswer("Respuesta del usuario");

if (optionEntered==1){
    guessNumber();}


if (optionEntered==4) {exit(0);}  

return 0;
}




