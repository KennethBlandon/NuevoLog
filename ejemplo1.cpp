/*Realice un programa que permita:
1. Ingresar x cantidad de numero
2. Clacular la suma de dichos numeros
3. Mostrar todos los numeros
4. Salir*/

/*Uso de switch - recursividad*/

#include <iostream>

using namespace std;
/*Constante*/
#define MAX 8

/*Variables globales*/
int nums[MAX];
int pos = 0; // posicion del elemento en el arreglo

void agregarNUM(int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++;
    }
    else
    {
        cout << "no se puede agregar el numero\n";
    }
}

int sumar(int suma, int ultElem)
{
    if (ultElem == -1)
    {
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(suma,ultElem - 1);
}

void menu()
{
    int op;
    int suma = 0;
    int num;
    cout << "1. Agregar elemento. " << endl;
    cout << "2. Sumar. " << endl;
    cout << "3. Mostrar. " << endl;
    cout << "4. Salir. " << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Dime un numero";
        cin >> num;
        agregarNUM(num);
        break;
    case 2:
        cout << "La suma es: " << sumar(suma, pos - 1) << endl;
        break;
    case 4:
        break;

    default:
        cout << "No existe la opcion \n";
        break;
    }
    menu();
}
int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
