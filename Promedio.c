#include <stdio.h>

float main ()
{
    printf("Bienvenido, esta aplicacion le ayuda a calcular el promedio de cinco notas \n" );


    float N1;
    float N2;
    float N3;
    float N4;
    float N5;
    float promedio;

   printf("Ingrese la primera nota \n");
   scanf("%f" , &N1);

if (N1 > 5){
    printf("valor incorrecto \n");
    exit(0);
}
if (N1 <0){
    printf("valor incorrecto \n");
    exit(0);
}


   printf("Ingrese la segunda nota \n");
   scanf("%f" , &N2);
   
if (N2 > 5){
    printf("valor incorrecto \n");
    exit(0);
}
if (N2 <0){
    printf("valor incorrecto \n");
    exit(0);
}


   printf("Ingrese la tercera nota \n");
    scanf("%f" , &N3);
if (N3 > 5){
    printf("valor incorrecto \n");
    exit(0);
}
if (N3 <0){
    printf("valor incorrecto \n");
    exit(0);
}


   printf("Ingrese la cuarta nota \n");
   scanf("%f" , &N4);
if (N4 > 5){
    printf("valor incorrecto \n");
    exit(0);
}
if (N4 <0){
    printf("valor incorrecto \n");
    exit(0);
}


   printf("Ingrese la quinta nota \n");
   scanf("%f" , &N5);
if (N5 > 5){
    printf("valor incorrecto \n");
    exit(0);
}
if (N5 <0){
    printf("valor incorrecto \n");
    exit(0);
}


   promedio= (N1+N2+N3+N4+N5)/ 5;
   printf("Su promedio es: %f \n", promedio);
if (promedio >= 2.95){
    printf("Aprobado");
}else{   
    printf ("Reprobado");
}

 return 0;

}