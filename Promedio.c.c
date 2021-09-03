#include <stdio.h>



void showMessageWrongValueAndExit (){
printf("valor incorrecto \n");
    exit(0);
}
void correctValue (float score ){
    if (score <0 || score >5){
        showMessageWrongValueAndExit();
    }
}

float requestScore (char* scoreNumber){
    float score;
    printf("Ingresar calificacion: ", scoreNumber );
    scanf("%f", &score);
    correctValue(score);
return score;
}
float calcProm(

    float N1,
    float N2,
    float N3,
    float N4,
    float N5
    
){
return (N1 + N2 + N3 + N4 + N5)/ 5;
}

void correctProm (float Prom){
    printf("Su promedio es: %f \n", Prom);
if (Prom >= 2.95){
    printf("Aprobado");
}else{   
    printf ("Reprobado");}
}
   
   
float main ()
{
    printf("Bienvenido, esta aplicacion le ayuda a calcular el promedio de cinco notas \n" );

   float N1, N2, N3, N4, N5;
   float Prom;


    N1= requestScore("primera");
    N2= requestScore("segunda");
    N3= requestScore("tercera");
    N4= requestScore("cuarta");
    N5= requestScore("quinta");

    Prom = calcProm(N1,N2,N3,N4,N5);

    correctProm(Prom);

 return 0;

}