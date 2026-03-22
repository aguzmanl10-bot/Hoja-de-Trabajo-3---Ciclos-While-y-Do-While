#include <iostream>
using namespace std;

//Mostrar números del 1 al 5
//Mostrar números pares del 1 al 10
//Salir

int main() {
    int opcion;
    cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;

    do {
        cout << "\nMENU:\n";
        cout << "1. Mostrar numeros del 1 al 5\n";
        cout << "2. Mostrar numeros pares del 1 al 10\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int i = 1;
            while (i <= 5) {
                cout << i << " ";
                i++;
            }
            cout << endl;
        } else if (opcion == 2) {
            int i = 2;
            while (i <= 10) {
                cout << i << " ";
                i += 2;
            }
            cout << endl;
        }

    } while (opcion != 3);

    cout << "Programa finalizado.\n";

    return 0;
}