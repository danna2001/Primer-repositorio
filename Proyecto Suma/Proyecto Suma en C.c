#include <stdio.h>

int main ()
{
    printf("Bienvenido este es un programa para sumar tres numeros \n" );

    int numberOne;
    int numberTwo;
    int numberThree;
    int result;

   printf("Ingrese el primer numero \n");
   scanf("%d" , &numberOne);

   printf("Ingrese el segundo numero \n");
   scanf("%d" , &numberTwo);

   printf("Ingrese el tercer numero \n");
    scanf("%d" , &numberThree);

    result= numberOne + numberTwo + numberThree ;
  printf("El resultado es: %d", result);
    scanf("%d" , &numberThree);

   return 0;

}
