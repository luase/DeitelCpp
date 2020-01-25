// Comparación de enteros mediante instrucciones if, operadores
// relacionales y operadores de igualdad.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    cout << " Escriba dos numeros enteros a comparar: ";
    cin >> numero1 >> numero2;

    if (numero1 == numero2)
	cout << numero1 << "==" << numero2 << endl;

    if (numero1 != numero2)
	cout << numero1 << "!=" << numero2 << endl;

    if (numero1 < numero2)
	cout << numero1 << "<" << numero2 << endl;

    if (numero1 > numero2)
	cout << numero1 << ">" << numero2 << endl;

    if (numero1 <= numero2)
	cout << numero1 << "<=" << numero2 << endl;

    if (numero1 >= numero2)
	cout << numero1 << ">=" << numero2 << endl;
}
