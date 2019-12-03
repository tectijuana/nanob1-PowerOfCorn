#include<stdio.h>
#include<iostream>

int main()
{
 double a,b,c,i,t;
    string p;
        cout<<"producto: ";
        cin >>p;
        cout<<"cantidad de Producto: ";
        cin>>a;
        cout<<"precio: ";
        cin>>b;
        c=a*b;
                cout << " la valor es:"<< c << endl;
        i=b*14/100;
                cout << " El iva  es:"<< i << endl;
        t=c+i;
        cout<<"El total a pagar es de :"<< t <<endl;
    return 0;
}