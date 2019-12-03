#include<stdio.h>
#include<math.h>
#include<conio.h>
 
main ()
{
float a,b,c,d,x1,x2;

printf ("\n\n\n Introduce el termino cuadratico:");
scanf ("%f",&a);
printf ("\n Introduce el termino lineal:");
scanf ("%f",&b);
printf ("\n Introduce el termino independiente:");
scanf ("%f",&c);
if (a!=0){
printf ("\n fuimonos");}
else {
 
printf ("\n No es posible realizar la operacion"); }
{
d=sqrt(b*b-(4*a*b));
}
if (d>0)
{
x1=((b*-1)+(d))/(2*a);
x2=((b*-1)-(d))/(2*a);
printf ("\n El resultado de x1 es: %f",x1);
printf ("\n El resultado de x2 es: %f",x2);}
else{
 
printf("\n No es posible realizar la operacion, revisa tus datos");}
getch ();
}
