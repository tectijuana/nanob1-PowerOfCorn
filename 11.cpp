#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>
 
int main()
{
	double altura, radio, vcono, vcilindro;
	char pregunta;
	const double pi = 3.1416;
	cout << "Introduzca el RADIO del cono y del cilindro: ";
	cin >> radio;
	cout << "Introduzca la ALTURA del cono y del cilindro: ";
	cin >> altura;
	
	if (radio > 0 && altura > 0)
	{
		vcono = (altura * pi * pow(radio, 2)) / 3; 
		vcilindro = altura * pi * pow(radio, 2); 
		cout << "\n\nEl volumen del CONO de radio " << radio << " y altura " << altura << " es: " << vcono << " u^3" << endl; // Imprime el resultado
		cout << "El volumen del CILINDRO de radio " << radio << " y altura " << altura << " es: " << vcilindro << " u^3" << endl; // Imprime el resultado
	}
	else
	{
		cout << endl << endl << "El valor introducido NO ES CORRECTO, debe introducir un numero positivo > 0.";
		while (radio <= 0 || altura <= 0) // Comprueba que el resultado sigue siendo incorrecto para preguntar si desea repetir el cálculo
		{
			cout << endl << "Quieres intentarlo de nuevo? S/N: ";
			cin >> pregunta;
			if (pregunta == 'S' || pregunta == 's') // Comprueba que el usuario desea repetir el cálculo
			{
				cout << endl << "Introduzca el RADIO del cono y del cilindro: ";
				cin >> radio;
				cout << "Introduzca la ALTURA del cono y del cilindro: ";
				cin >> altura;
				if (radio > 0 && altura > 0)
				{
					vcono = (altura * pi * pow(radio, 2)) / 3;
					vcilindro = altura * pi * pow(radio, 2);
					cout << endl << endl << "El volumen del CONO es: " << vcono << " u^3" << endl;
					cout << "El volumen del CILINDRO es: "<< vcilindro << " u^3" << endl;
				}
				else
				{
					cout << endl << endl << "El valor introducido NO ES CORRECTO, debe introducir un numero positivo > 0.";
				}
			}
			else
			{
				return 0; // Finaliza el programa porque el usuario no quiere continuar
			}
		}
 
	}
	system("PAUSE");
	return 0;
}