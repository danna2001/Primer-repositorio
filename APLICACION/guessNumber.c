
void guessNumber(){

srand(time(NULL));
int randomNumber = rand()%10;
int answer;
int maximumAttempts=3;
int i=0;
int question;
printf("\nHola");
printf("\nHe seleccionado un numero al azar entre 0 y 10, tu tarea es adivinarlo en 3 intentos");
while(1){
    i++;
printf("\nEscribe el numero que crees que elegi: ");
    scanf("%d", &answer);
if (randomNumber < answer){
printf("\nIncorrecto, pero te doy una pista: el numero que elegi es menor que %d\n",answer);}
else if (randomNumber > answer){
printf("\n Incorrecto, pero te doy una pista: el numero que elegi es mayor que %d\n",answer);}
else  {
      printf("Correcto. El numero que seleccione fue %d\n",answer);
     printf ("Felictaciones,has ganado el juego");
     menuTwo();
    int optionEnteredTwo= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredTwo==1){guessNumber();}
    if (optionEnteredTwo==2) {menu();}
      break; }
if (i >= maximumAttempts) {
      printf("\nPerdiste. El numero que seleccione fue %d\n",randomNumber);
      printf("Lo siento mucho\n");
      menuTwo();
    int optionEnteredTwo= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredTwo==1){guessNumber();}
    if (optionEnteredTwo==2) {menu();}
       break;}
       }}
