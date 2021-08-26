#include <stdio.h>

int main ()
{
    printf("Bienvenido, esta aplicacion le ayuda a calcular el promedio de cinco notas \n" );


    int N1;
    int N2;
    int N3;
    int N4;
    int N5;
    int promedio;

   printf("Ingrese la primera nota \n");
   scanf("%d" , &N1);

   printf("Ingrese la segunda nota \n");
   scanf("%d" , &N2);

   printf("Ingrese la tercera nota \n");
    scanf("%d" , &N3);

   printf("Ingrese la cuarta nota \n");
   scanf("%d" , &N4);

   printf("Ingrese la quinta nota \n");
   scanf("%d" , &N5);

   promedio= (N1+N2+N3+N4+N5)/ 5;
printf("Su promedio es: %d", promedio);

    return 0;

}