#include <iostream>
using namespace std;

int variable;
int *puntero = &variable;
int main()
{
    cout << "hola mundo \n";
    variable = 10;
    cout << "Contenido de la variable: " << variable << "\n";
    cout << "Direccion de memoria de la variable: " << &variable << "\n";
    cout << "Size of: " << sizeof(&variable) << "\n";
    cout << "\n";
    cout << "Direccion de memoria del Puntero: " << puntero << "\n";
    cout << "Contenido del Puntero: " << *puntero;
}