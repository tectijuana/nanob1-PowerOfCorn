#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int multiplicacion, numero, a=1;
    cout<<"ingresa el numero de la tabla : ";
    cin>>numero;
    
    cout<<"la tabla del"<<numero<<"es :"<<endl;
    do{
    
    multiplicacion = numero * a;
    
    cout<<numero<<"x"<<a<<"="<<multiplicacion<<endl;
    a++;
    }
    while(a<=12);
    
    
    
    
}
// este programa despliega toda la tabla de multiplicar de un numero entre 1 y 12