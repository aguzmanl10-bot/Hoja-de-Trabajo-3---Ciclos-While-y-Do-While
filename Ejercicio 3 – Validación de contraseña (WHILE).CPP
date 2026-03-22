#include <iostream>
using namespace std;

//Solicite una contraseña
//Si es incorrecta, vuelva a pedirla
//Finalice cuando sea correcta


int main() {
    int pass = 0;
    cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;


    while (pass != 1234) {
        cout << "Ingrese la contraseña: ";
        cin >> pass;

        if (pass != 1234) {
            cout << "Error: contraseña incorrecta\n";
        }
    }

    cout << "Acceso permitido,  Bienvenido\n";

    return 0;
}