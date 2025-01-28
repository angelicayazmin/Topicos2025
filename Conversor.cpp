#include <iostream>
using namespace std;

void convertirKilometrosAMillas() {
    double km;
    cout << "Ingresa la distancia en kilometros: ";
    cin >> km;
    double millas = km * 0.621371;
    cout << km << " kilómetros son " << millas << " millas." << endl;
}

int main() {
    int opcion;

    do {
        cout << "\n*** Conversor de Unidades ***" << endl;
        cout << "1. Kilometros a Millas" << endl; 
        cout << "5. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            convertirKilometrosAMillas();
            break;
        case 5:
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, intenta de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
