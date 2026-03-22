#include <iostream>
using namespace std;
 // Crear un programa que:
//Solicite un número entero al usuario
//Valide que el número sea mayor que 1
//Muestre los números en forma descendente hasta 1

int main() {
    int num;
    cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;

    cout << "Ingrese un numero mayor que 1: ";
    cin >> num;

    while (num <= 1) {
        cout << "Error. Ingrese un numero mayor que 1: ";
        cin >> num;
    }

    while (num >= 1) {
        cout << num << endl;
        num--;
    }

    return 0;
}