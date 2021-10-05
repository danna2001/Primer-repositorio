
char word[60];
char wordDisplayed[60];
int lives;


void guessWord(){

printf("   \nADIVINA LA PALABRA\n");
printf("\nIntroduzca la palabra a adivinar: ");
scanf("\n%s",&word);
system("cls");

   lives= 5;

     for(int i=0 ; i<strlen(word);i++){
      if(word[i]>='a' && word[i]<='z'){
        wordDisplayed[i]= '_';
      
      }}
      printf ("Vidas: %d \n",lives);
      printf (wordDisplayed);
    

   while(lives>0 )

   {    
     printf("\n\nIngrese una letra:");
        char letter;
        scanf("%s",&letter);
        system("cls");
        
        bool lostLives=true;

    for(int i=0 ; i<strlen(word) ; i++){
        if (letter == word[i]){
            lostLives=false;
          wordDisplayed[i]=letter;
        printf("Correcto");}
    }if (lostLives) {printf("incorrecto, intenta de nuevo");
            lives = lives - 1; }
        printf ("\nVidas: %d \n",lives);
         printf ( wordDisplayed);
            if(strcmp(word,wordDisplayed) == 0) {
            printf("\n\nFelicitaciones adivinaste la palabra\n");
            
            menuTwo();
    int optionEnteredFour= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredFour==1){guessWord();}
    if (optionEnteredFour==2) {menu();}
    break;}
            if(lives==0){printf("\n Perdiste, la palabra era %s",word);
            menuTwo();
    int optionEnteredFour= requestAnswerTwo("Respuesta dos del usuario");
    if (optionEnteredFour==1){guessWord();}
    if (optionEnteredFour==2) {menu();}
    break;}

    
}

         }



