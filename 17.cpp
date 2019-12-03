
#include <iostream>
#include <fstream>


int impresora()
{
char filename[15], ch[80];
int height = 0, page = 1;
printf("Ingresa el nombre del archivo: ");
cin.get( filename, 50 );
cout << endl;

ifstream Source("rep_imp.c");
ofstream Printer( "LPT1" ); // Open Printerstream
if( (!Printer) || (!Source) ) // Checando streams
{
if( !Printer )
{
printf("'\a' << Printer error!!!\n");
}
else
{
cout << '\a' << "Sourcefile error!!!" << endl;
}
cin.get();
}
else
{
cout << "Printing";
Printer <<"DAEN COPIADORAS\nhttp://www.fixedz.com"<<endl;
while(!Source.eof()) // deteniendo el ciclo de lectura
{
Source.getline( ch, 80 );

Printer << ch << endl; // Print stream
cout << ".";
//height++;
} // Expulsando ultima hoja
Printer << '\n';
Printer << '\n';
Printer << '\n';
Printer << '\n';

Printer.close(); // Cerrando streams
Source.close();

cout << endl << "Printing done" << endl;
cin.get();
}
}