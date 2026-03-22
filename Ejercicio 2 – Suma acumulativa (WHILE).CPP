#include <iostream>
using namespace std;
//Solicite números al usuario
//Acumule la suma
//Finalice cuando el usuario ingrese 0
//Muestre el total acumulado

int main() {
    int num = 1;   
    int suma = 0;  
     cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;

    while (num != 0) {
        cout << "Ingrese un numero (CUANDO YA NO NECESITE LA SUMA DE LOS DATOS COLOCAR 0 PARA TERMINAR): ";
        cin >> num;

        suma = suma + num;
    }

    cout << "Total acumulado: " << suma << endl;

    return 0;
}