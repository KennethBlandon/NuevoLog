#include<iostream>

using namespace std;

#define MAX 100

int vector [MAX]; //arreglo o vector
int pos=0;//posicion o ubicacion de elemento dentro del arreglo

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant;//almacenar la cantidad de elementos
    int num;
    cout << "Dime cuentos numeros desea almacenar: ";
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Dime un #: ";
        cin >> num;
        agregar(num);
    }
    mostrar();
    return 0;
}
void agregar(int num){
    vector[pos]=num;
    pos++;
}
void mostrar(){
    for (int i = 0; i <= pos; i++)
    {
        cout << vector[i] << endl;
    }
    
}
