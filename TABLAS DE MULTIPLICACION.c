#include <stdio.h>


void welcomeMessage(){
    printf ("Bienvenido este programa muestra las tablas de multiplicar de un numero\n");    
}


int requestNumber(char* numberToMultiply){
    printf("Ingrese un numero=" );
    int number;
    scanf("%d", &number);
    return number;
}


int calculateMultiplication(int i, int enteredNumber ){
   int multiplicacionTables= i * enteredNumber;
   return multiplicacionTables ;
}

int multiplicationWithFor (int requestedNumber, int multiplication ){
 
    for (int i = 1; i<=10; i++){ 
       int multiplication= calculateMultiplication(requestedNumber,i);
       printf("%d x %d = %d\n", requestedNumber, i, multiplication);}
    return multiplication;
}


int multiplicationWithWhile (int secondProcess, int secondMultiplication )
{
    
    int i=1 ;
    while (i<=10){
       int secondMultiplication= calculateMultiplication(secondProcess,i);
       printf("%d x %d = %d\n",secondProcess, i, secondMultiplication);
       i++;
       
    }
 
}
int multiplicationWithDoWhile(int thirdProcess, int thirdMultiplicacion ){
    int i=1;
    do{
       thirdMultiplicacion = calculateMultiplication(thirdProcess,i);
       printf("%d x %d = %d\n",thirdProcess, i, thirdMultiplicacion);
       i++;
    }while(i<=10);
    return thirdMultiplicacion;
}

int main (){
    welcomeMessage();
    int entry,calculation;
    entry= requestNumber("Numero Solicitado");
    
    multiplicationWithFor(entry,calculation);
    printf("_____________________\n");
    multiplicationWithWhile(entry,calculation);
    printf("_____________________\n");
    multiplicationWithDoWhile(entry,calculation);


return 0;
}