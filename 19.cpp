#include <stdio.h>

main()
{
      float voltaje; 
      float intensidad; 
      float resistencia; 
      float eleccion;
/*-----------------------------------------------------------*/ 
      cabeza:
      system("cls");
      printf("Este programa es una calculadora de la ley de ohm.\n");
      printf("\n");
      printf("1.Voltaje.\n");
      printf("2.Intensidad.\n");
      printf("3.Resistencia.\n");
      printf("Seleccione que desea calcular: ");
      scanf("%f",&eleccion);
      printf("\n");
                            if (eleccion == 1)
                            {
                            system("cls");
                            printf("Ha elegido calcular el voltage\n");
                            printf("\n");
                            printf("Introduce la intensidad en amperios: ");
                            scanf("%f", &intensidad);
                            printf("Introduce la resistencia en ohmios: ");
                            scanf("%f", &resistencia);
                            
                            voltaje = intensidad * resistencia; /*Calcula el voltaje*/
                            printf("El valor del voltaje es %0.0f voltios", voltaje);
                            system("Pause>nul");
                            }
                            else
                            if (eleccion == 2)
                            {
                            system("cls");
                            printf("Ha elegido calcular la intensidad\n");
                            printf("\n");
                            printf("Introduce el voltaje en voltios: ");
                            scanf("%f", &voltaje);
                            printf("Introduce la resistencia en ohmios: ");
                            scanf("%f", &resistencia);
                            
                            intensidad = voltaje / resistencia; /*Calcula la intensidad*/
                            printf("El valor del la intensidad es %0.5f amperios", intensidad);
                            system("Pause>nul");
                            }
                            else
                            if (eleccion == 3)
                            {
                            system("cls");
                            printf("Ha elegido calcular la resistencia\n");
                            printf("\n");
                            printf("Introduce el amperaje en amperios: ");
                            scanf("%f", &intensidad);
                            printf("Introduce el voltaje en voltios: ");
                            scanf("%f", &voltaje);
                            
                            resistencia = intensidad / voltaje; /*Calcula la intensidad*/
                            printf("El valor del la resistencia es %0.0f ohms", resistencia);
                            }
                            else
                            {
                                system("cls");
                                printf("Selecciona una de las opciones validas\n");
                                system("pause>nul");
                                goto cabeza;
                                }
                            system("Pause>nul");
                                                  
                            }