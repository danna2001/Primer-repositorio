#include <stdio.h>
#include <string.h>
#include <stdlib.h>



float requestProduct (char* productName ){
char product [30];
char keyword[30]= "televisor" ;

 printf("Ingresar Producto\n", productName );
 scanf("%s", &product);
if (strcmp (product,keyword)==0){
 printf ("se le aplicara el 15 por ciento de descuento sobre el valor total de su compra\n");}
return 0;
}


float requestPrice (char* productPrice ){

float price;

printf("Ingresar precio\n", productPrice );
 scanf("%f", &price);

return price;
}
 
 float calcTotalPrice(

    float price1,
    float price2,
    float price3,
    float price4,
    float price5
    
){
return (price1+ price2+price3+ price4+ price5);
}

void Totalprice (float Total){
    printf("El total es: %f \n", Total);

}

float main ()
{
    printf("Ingrese el nombre y el valor del producto \n" );

    float price1, price2, price3, price4, price5;
    char product1[30],product2[30],product3[30],product4[30],product5[30];
    float priceTotal;

    product1[30]= requestProduct("Primero");
    price1= requestPrice ("Primero") ;
    product2[30]= requestProduct("segundo");
    price2= requestPrice ("Segundo");
    product3[30]= requestProduct("Tercero");
    price3= requestPrice ("Tercero");
    product4[30]= requestProduct("cuarto");
    price4= requestPrice ("cuarto");
    product5[30]= requestProduct("Quinto");
    price5= requestPrice ("Quinto");

 priceTotal= calcTotalPrice(price1, price2, price3, price4, price5);

 Totalprice(priceTotal);

 printf ("¿Realizo la compra de un televisor ?\n" );
 char Answer[5];
 char si[5],no[5];
 float Totalcon15;
 Totalcon15= (priceTotal-(priceTotal*15/100));
 float Totalcon10;
 Totalcon10=(priceTotal-(priceTotal*10/100));

 printf("si o no\n");
 scanf("%s", &Answer);

 if (strcmp (Answer,"si")==0){
 printf ("mas el 15 por ciento de descuento sobre el valor total de su compra\n");
 printf("El total es: %f \n", Totalcon15);
 }else {printf ("se le aplicara el 10 por ciento de descuento sobre el valor total de su compra\n");
 printf("El total es: %f \n", Totalcon10);}


 return 0; 
}
