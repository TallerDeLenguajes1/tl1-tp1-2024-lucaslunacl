#include <iostream>
using namespace std;

int cuadradoNumero(int valor);
void cuadradoNumeroVoid(int valor);
void invertir(int a, int b);
void orden(int a,int b);
int main()
{

    cout << "Funcion tipo int :" << cuadradoNumero(5) << "\n";

    cout << "Funcion tipo void cuadrado de un Numero:"
         << "\n";
    cuadradoNumeroVoid(5);

    cout << "\n Funcion tipo void invertir :"
         << "\n";
    invertir(5, 10);
    cout << "\n Funcion tipo void orden :"
         << "\n";
    orden(11, 10);

    return 0;
}

int cuadradoNumero(int valor)
{
    return valor * valor;
}

void cuadradoNumeroVoid(int valor)
{
    cout << valor * valor;
}

void invertir(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    cout << "A: " << a << " " << "B: " << b << "\n";
}


void orden(int a,int b){
    if(a>b){
        int aux;
        aux=a;
        a=b;
        b=aux;
    }
    cout << "A: " << a << " " << "B: " << b << "\n";
}