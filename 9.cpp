#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// cabezera
string toString (double);
int toInt (string);
double toDouble (string);
// el programa calcula el maximo comun divisor de los numeros a y b 
int main() {
    int a;
    int b;
    int c;
    
    cout << "inserte numero entero a" << endl;
    cin >> a;
    cout << "Inserte numero entero b" << endl;
    cin >> b;
    while (a != b) {
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }
        a = a - b;
    }
    cout << "Maximo Comun Divisor M.C.D. es:" << endl;
    cout << b << endl;
    return 0;
}

// The following implements type conversion functions.
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