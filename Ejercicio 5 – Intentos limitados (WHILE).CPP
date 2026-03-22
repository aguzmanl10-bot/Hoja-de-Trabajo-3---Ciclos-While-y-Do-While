#include <iostream>
using namespace std;
//Solicite una contraseña
//El usuario tiene 3 intentos
//Si falla:
        //Mostrar “Acceso denegado”
//Si acierta:
        //Mostrar “Bienvenido”

int main() {
    int pass, intentos = 0;
    cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;

    while (intentos < 3) {
        cout << "Ingrese la contraseña: ";
        cin >> pass;

        if (pass == 1234) {
            cout << "Bienvenido.\n";
            return 0;
        }

        intentos++;
        cout << "Incorrecto.\n";
    }

    cout << "Acceso denegado.\n";

    return 0;
}