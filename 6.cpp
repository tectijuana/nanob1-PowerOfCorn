#include <stdio.h>   

int main (void){
   
   
    int F; 
    int C; 
   
    do
    {
    
     printf("Escriba las filas de la matriz ");
     scanf ("%d", &amp;F);
     printf("Escriba las columnas de la matriz ");
     scanf ("%d", &amp;C);
   
     }
    while ( F != C );
    printf("La matriz es de %d x %d por lo cual tendra %d elementos \n\n" , F , C , (F*C));
   
  int matriz [F][C];   

 
  int i;  
  int j;  
 
  for ( i = 1 ; i &lt;= C ; i++ ) 
  {

      for (j=1 ; j &lt;= F ; j++ )
    {
         
          printf("Escriba el valor de elemento %d en la columna %d " , j,i);
          scanf ("%d" , &amp;matriz[i][j] );
         
         
    }
   
}  
   
int suma=0;

for (i = 1 ; i &lt;= C ; i++ )
{
    for (j = 1 ; j&lt;= F ; j++ )
    {
        suma = suma + matriz[i][j];
        }
}


   
  printf ("La suma es %d \n\n" , suma ); 
   

    return 0;
}