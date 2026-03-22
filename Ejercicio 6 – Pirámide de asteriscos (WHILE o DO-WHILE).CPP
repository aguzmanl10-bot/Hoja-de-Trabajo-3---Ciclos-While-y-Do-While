#include <iostream>
using namespace std;

//Solicite un número entero
//Genere una pirámide de asteriscos

int main() {
     cout << "Nombre: ANA GABRIELA GUZMAN LEMUS" << endl << endl;

    int n, i = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (i <= n) {
        int j = 1;

        while (j <= i) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}