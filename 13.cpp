#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>
 
int main()
{
	double lado1, lado2, angulo, radianes, area;
	char pregunta;
	const double pi = 3.1416;
	
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "calcular area de triangulo" << endl;
	cout << "-----------------------------------------------------------------------" << endl << endl;
	cout << "- Introduzca uno de los lados del triangulo: ";
	cin >> lado1;
	cout << endl <<"- Introduzca el otro lado del triangulo: ";
	cin >> lado2;
	cout << endl << "- Introduzca el angulo existente entre ambos lados: ";
	cin >> angulo;
	
	if (lado1 > 0 && lado2 > 0 && angulo > 0)
	{
		radianes = angulo * pi / 180;
		area = 0.5 * lado1 * lado2 * sin (radianes);
		cout << endl <<"-----------------------------------------------------------------------" << endl;
		cout << "EL AREA DEL TRIANGULO INDICADO ES: " << area << " u^2" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
	}
	else
	{
		cout << endl << "-----------------------------------------------------------------------" << endl;
		cout << "Alguno/s de los valores introducidos no son correctos, debe introducir numeros > 0.";
		while (lado1 <= 0 || lado2 <= 0 || angulo <= 0) // Comprueba que el resultado sigue siendo incorrecto para preguntar si desea repetir el cálculo
		{
			cout << endl << "Quieres intentarlo de nuevo? S/N: ";
			cin >> pregunta;
			if (pregunta == 'S' || pregunta == 's') // Comprueba que el usuario desea repetir el cálculo
			{
					cout << "-----------------------------------------------------------------------" << endl << endl;
					cout << "- Introduzca uno de los lados del triangulo: ";
					cin >> lado1;
					cout << endl << "- Introduzca el otro lado del triangulo: ";
					cin >> lado2;
					cout << endl << "- Introduzca el angulo existente entre ambos lados: ";
					cin >> angulo;
				if (lado1 > 0 && lado2 > 0 && angulo > 0)
				{
					radianes = angulo * pi / 180;
					area = 0.5 * lado1 * lado2 * sin (radianes);
					cout << endl << "-----------------------------------------------------------------------" << endl;
					cout << "EL AREA DEL TRIANGULO INDICADO ES: " << area << " u^2" << endl;
					cout << "-----------------------------------------------------------------------" << endl << endl;
				}
				else
				{
					cout << endl << "-----------------------------------------------------------------------" << endl;
					cout << "Alguno/s de los valores introducidos no son correctos, debe introducir numeros > 0.";
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