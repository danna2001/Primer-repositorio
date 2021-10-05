


void menu(){
printf ("\n %cQue deseas jugar?\n",168);   
   

        printf( "\n   1.Adivina un numero");
        printf( "\n   2.Sopa de letras ");
        printf( "\n   3.Adivina la palabra" );
        printf( "\n   4.Salir" );
}
void menuTwo(){
printf("\n 1. Volver a jugar");
      printf("\n 2. Volver al menu");

}


int requestAnswer(char* answerEntered){
    printf( "\n\n   Introduzca una opcion (1-4): " );
    int option;
    scanf("%d", &option);
      system("cls");
    return option;
}
int requestAnswerTwo(char* answerEnteredTwo){
    printf( "\n\n   Introduzca una opcion (1-2): " );
    int optionTwo;
    scanf("%d", &optionTwo);
    system("cls");
    return optionTwo;
}