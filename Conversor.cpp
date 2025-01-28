#include <iostream>
using namespace std;

void convertirKilometrosAMillas() {
    double km;
    cout << "Ingresa la distancia en kilometros: ";
    cin >> km;
    double millas = km * 0.621371;
    cout << km << " kilómetros son " << millas << " millas." << endl;
}


void convertirCelsiusAFahrenheit() {
    double celsius;
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
}


int main() {
    int opcion;

    do {
        cout << "\n*** Conversor de Unidades ***" << endl;
        cout << "1. Kilómetros a Millas" << endl;
        cout << "2. Celsius a Fahrenheit" << endl;
        cout << "3. Kilogramos a Libras" << endl;
        cout << "4. Centímetros a Pulgadas" << endl;
        cout << "5. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                convertirKilometrosAMillas();
                break;
            case 2:
                convertirCelsiusAFahrenheit();
                break;
            case 5:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intenta de nuevo." << endl;

        }
    }
}
  
