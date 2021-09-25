#include <stdio.h>
#include <string.h>
#include<time.h>
#include <stdlib.h>

void menu(){
printf ("¿Que deseas jugar?\n");   
   

        printf( "\n   1.Adivina un numero");
        printf( "\n   2.Sopa de letras ");
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
    
   
void alphabetSoup(){


printf("SOPA DE LETRAS\n\n");
printf("Elige que tema deseas jugar");
    printf("\n\n1. Frutas");
    printf("\n2. Animales");
    
printf( "\n\n   Introduzca una opcion (1-3): " );

    int theme,points,opportunities;
    
    scanf("%d", &theme);
    if (theme==1){
        char fruits[20];
        int fruitOne=0,fruitTwo=0,fruitThree=0,fruitFour=0,fruitFive=0;
        opportunities=5;
        points=0;
        
        printf("Bienvenido, tu tarea es encontrar cinco palabras, tienes cinco oportunidades");
        printf("\n\nSOPA DE LETRAS *FRUTAS*  ");
                         
                         printf("\n  | c x i u v a n |\n");
                         printf("  | b j y r j u a |\n");
                         printf("  | f r e s a r r |\n");
                         printf("  | d a h p f z a |\n");
                         printf("  | t b c o c o n |\n");
                         printf("  | c a b f l z j |\n");
                         printf("  | m a n z a n a |\n");

        
do{
        printf("Ingrese  una palabra encontrada\n");                
        
        scanf("\n%s",fruits);
        if(strcmp(fruits, "fresa")==0 && fruitOne==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                fruitOne=1;}
        else if(strcmp(fruits, "naranja")==0 && fruitTwo==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                fruitTwo=1;}
        else if(strcmp(fruits, "manzana")==0 && fruitThree==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                fruitThree=1;}
        else if(strcmp(fruits, "coco")==0 && fruitFour==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                fruitFour=1;}
        else if(strcmp(fruits, "uva")==0 && fruitFive==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                fruitFive=1;}
                else{
                printf("Incorrecto. Intenta de nuevo\n");
                opportunities=opportunities-1; }
                }
    while(opportunities!=0);
    printf("Juego acabado!\n");
    printf("\nTus puntos: %d\n", points);
    menuTwo();
    int optionEnteredThree= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredThree==1){alphabetSoup();}
    if (optionEnteredThree==2) {menu();}
    }
                     
if (theme==2){
        opportunities=5;
        points=0;
        
        printf("Bienvenido, tu tarea es encontrar cinco palabras, tienes cinco oportunidades");
        printf("\n\nSOPA DE LETRAS  *ANIMALES*  ");
                         
                         printf("\n  | d r f g a t o|\n");
                         printf("  | o s o m n m f |\n");
                         printf("  | l p y e u v k |\n");
                         printf("  | v e r q o o q |\n");
                         printf("  | z r o n n c u |\n");
                         printf("  | y r k n w i b |\n");
                         printf("  | i o l o r o r |\n");
char animals[20];
        int animalOne=0,animalTwo=0,animalThree=0,animalFour=0,animalFive=0;
        
do{
        printf("Ingrese  una palabra encontrada\n");                
        
        scanf("\n%s",animals);
        if(strcmp( animals, "loro")==0 && animalOne==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                animalOne=1;}
        else if(strcmp( animals, "perro")==0 && animalTwo==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                animalTwo=1;}
        else if(strcmp(animals, "gato")==0 && animalThree==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                animalThree=1;}
        else if(strcmp( animals, "oso")==0 && animalFour==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                animalFour=1;}
        else if(strcmp (animals, "leon")==0 && animalFive==0){
                printf("Palabra encontrada! 5 puntos\n");
                points=points+5;
                opportunities=opportunities-1;
                animalFive=1;}
                else{
                printf("\nIncorrecto. Intenta de nuevo\n");
                opportunities=opportunities-1; }
                }
    while(opportunities!=0);
    printf("Juego acabado!\n");
    printf("\nTus puntos: %d\n", points);
    menuTwo();
    int optionEnteredThree= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredThree==1){alphabetSoup();}
    if (optionEnteredThree==2) {menu();}
    }

}

int main(){
    printf("Bienvenido\n");
    menu();
    int optionEntered= requestAnswer("Respuesta del usuario");

if (optionEntered==1){
    guessNumber();}

if (optionEntered==2){alphabetSoup();}
if (optionEntered==4) {exit(0);}  

return 0;
}




