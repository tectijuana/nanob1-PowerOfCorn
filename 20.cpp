#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x=0, R=0,a=0,b=0,c=0,d=0,x1=0,x2=0,y1=0,y2=0,pi=0,m=0,n=0,M=0,f=0;

cout<<"MENU DE OPERACIONES DE FISICA \n\n";

cout <<"1)carga electrica\n";
cout <<"2)ley columb\n";
cout <<"3)modulo de loung\n";
cout <<"4)frecuencia oscilacion\n";
cout <<"5)choque inelastico\n";
cout <<"6)leyes de gases \n";
cout <<"7)cantidad de calor \n";
cout <<"8)campo electrico vectorialmente\n";
cout << "9)campo electrico escalar\n";
cout << "10)viscosidad\n";

 cout <<"INGRESE EL UNA OPCION:"; cin>>x; cout<<endl;






     
switch(x)
{     
case 1: 
     {
     cout<<"calculo carga electrica\n\n";
     cout<<"ingresar el numero electron n=";cin>>a;
     cout<<"ingresar el numero entero e=";cin>>b;
     R=a*b;
     cout<<"resultado de n*e="<<R;
     system("PAUSE");
     break;
     }
case 2:
     {
      cout<<"calculo de ley colmub\n\n";
      cout<<"ingresar carga q1=";cin>>x1;             
 	  cout<<"ingresar carga q2=";cin>>x2;
      cout<<"ingresar radio r=";cin>>d;  
       cout<<"ingresar k=";cin>>c;  
 	  R=c*(x1*x2/d);
 	  cout<<"resultado de ley de columb="<<R;
 	  system("PAUSE");
 	  break;
    }
case 3:
     {
      cout<<"calculo  de modulo de loung\n\n";         
      cout<<"ingresar fuerza f=";cin>>f;
      cout<<"ingresar area a=";cin>>a;
      cout<<"ingresar variacion v=";cin>>d;
      cout<<"ingresar longitud l=";cin>>c;
      R=(f*c)/(d*a);
      cout<<"resultado es ="<<R;
      system("PAUSE");
      break;
      }
case 4:
      {
      cout<<"calculo de frecuencia de oscilacion\n\n";
      cout<<"ingresar masa m=";cin>>m;
      cout<<"ingresar pi=";cin>>pi;
      cout<<"ingresar constante elastico k=";cin>>d;
      R=(m/d)*2*pi;
      cout<<"resultado frecuencia de oscilacion es="<<R;
      system("PAUSE");
      break;
      }
case 5:
      {
      cout<<"calculo de choque inelastico\n";
      cout<<"ingresar masa1=";cin>>x1;                             
      cout<<"ingresra masa2=";cin>>x2;
      cout<<"ingresar velocidad1=";cin>>y1;
      cout<<"ingresar velocidad2=";cin>>y2;
      R=x1*y1+x2*y2/x1+x2;
      cout<<"resultado velocidad final es ="<<R;
      system("PAUSE");
      break;
      }
case 6:
      {
      cout<<"calculo de leyes de gases\n";
      cout<<"ingresar volumen=";cin>>d;
      cout<<"ingresar temperatura=";cin>>b;
      cout<<"ingresar constante r=";cin>>a;
      cout<<"ingresar  M gramos=";cin>>M;
      cout<<"ingresar m masa=";cin>>m;
      cout<<"ingresar numero de n=";cin>>n;
      R=(m/M)*n*a*b/d;
      cout<<"ingresar presion es="<<R;
      system("PAUSE");
      break;
      }
case 7:
     {
     cout<<"calculo  cantidad de calor \n"; 
     cout<<"ingresar temperatura 1=";cin>>x1;
     cout<<"ingresar temperatura 2=";cin>>x2;
     cout<<"ingresar masa=";cin>>m;
     cout<<"ingresar calor especifico=";cin>>c;
     R=m*c*(x2-x1);
     cout<<"resultado de cantidad de calor="<<R;
     system("PAUSE");
     break;
     }              
case 8:
     {
     cout<<"calculo campo electrico vectorialmente\n";
     cout<<"ingresar carga puntual=";cin>>d;
     cout<<"ingresar fuerza=";cin>>f;
     R=f/d;
     cout<<"resultado de campo electrico vectorialmente="<<R;
     system("PAUSE");
     break;
     } 
case 9:
     {
       cout<<"calculo campo electrico escalar\n";
     cout<<"ingresar carga puntual=";cin>>f;
     cout<<"ingresar distancia=";cin>>d;
     cout<<"ingresar constante k=";cin>>c;
     R=c*f/d*d;
     cout<<"resultado de campo electrico escalar="<<R;
     system("PAUSE");
     break;
     }                 
case 10:
     {
     cout<<"calculo  viscosidad\n"; 
     cout<<"ingresar area=";cin>>a;   cout<<"ingresar coef. viscosidad=";cin>>n;
     cout<<"ingresar velocidad=";cin>>d;
     cout<<"ingresar altura=";cin>>c;
     R=n*a*d/c;
     cout<<"resultado de viscosidad es="<<R;
     system("PAUSE");
     break;
     }        
                          
  system("PAUSE");
}
}