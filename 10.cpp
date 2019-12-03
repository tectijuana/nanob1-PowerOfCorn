#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    // El Programa realiza la suma de dos numeros
    // 
    int a;
    int b;
    
    cout << "Inserte el primer numero & ToChar(13) & ToChar(10)&" << endl;
    cin >> a;
    cout << "inserte el segundo numero & ToChar(13) & ToChar(10)&" << endl;
    cin >> b;
    cout << "efectuo la suma!" << (char) 13 << (char) 10 << "Run Sum!" << endl;
    cout << "la suma es :" << toString(a + b) << (char) 13 << (char) 10 << "Sum is:" << toString(a + b) << endl;
    return 0;
}

// el programa realiza conversion de funciones
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}