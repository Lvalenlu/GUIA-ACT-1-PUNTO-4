#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, edad, carrera;
    int opcion, cantAdicional;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su carrera: ";
    cin >> carrera;

    cout << "¿Desea ingresar más datos? Si es así, escriba 1: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "¿Cuántos datos adicionales desea ingresar?: ";
        cin >> cantAdicional;

        string adicional[cantAdicional];
        string infoAdicional[cantAdicional];

        for (int i = 0; i < cantAdicional; i++) {
            cout << "¿Qué dato desea ingresar?: ";
            cin >> adicional[i];
            cout << "Ingrese su " << adicional[i] << ": ";
            cin >> infoAdicional[i];
        }

        cout << endl;
        cout << "Información adicional:" << endl;
        for (int i = 0; i < cantAdicional; i++) {
            cout << adicional[i] << ": " << infoAdicional[i] << endl;
        }
    }

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;

    return 0;
}