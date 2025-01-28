#include <iostream>
using namespace std;

void convertirKilometrosAMillas() {
    double km;
<<<<<<< HEAD
    cout << "Ingresa la distancia en kilómetros: ";
=======
    cout << "Ingresa la distancia en kilometros: ";
>>>>>>> origin/main
    cin >> km;
    double millas = km * 0.621371;
    cout << km << " kilómetros son " << millas << " millas." << endl;
}

<<<<<<< HEAD
=======

>>>>>>> origin/main
void convertirCelsiusAFahrenheit() {
    double celsius;
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
}
<<<<<<< HEAD

=======
>>>>>>> origin/main
void convertirKilogramosALibras() {
    double kg;
    cout << "Ingresa el peso en kilogramos: ";
    cin >> kg;
    double libras = kg * 2.20462;
    cout << kg << " kilogramos son " << libras << " libras." << endl;
}

<<<<<<< HEAD
void convertirCentimetrosAPulgadas() {
    double cm;
    cout << "Ingresa la longitud en centímetros: ";
    cin >> cm;
    double pulgadas = cm / 2.54;
    cout << cm << " centímetros son " << pulgadas << " pulgadas." << endl;
}
=======
>>>>>>> origin/main

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
            case 3:
                convertirKilogramosALibras();
                break;
<<<<<<< HEAD
            case 4:
                convertirCentimetrosAPulgadas();
                break;
=======
>>>>>>> origin/main
            case 5:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intenta de nuevo." << endl;
<<<<<<< HEAD
        }
    } while (opcion != 5);

    return 0;
}
=======

        }
    } while (opcion != 5);
}
  
>>>>>>> origin/main
