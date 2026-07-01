#include <iostream>
#include <string>
using namespace std; 

struct Persona {
    string nombres;
    string DNI; 
    int edad;
};

int main () {
    int n; 
    Persona personas[100];
    
    cout << "Ingrese la cantidad de personas a registrar: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombres: ";
        getline(cin, personas[i].nombres);
        cout << "DNI: ";
        getline(cin, personas[i].DNI);
        cout << "Edad: "; 
        cin >> personas[i].edad;
        cin.ignore();
    }

    int mayoresDe50 = 0;
    double sumaEdades = 0;

    for (int i = 0; i < n; i++) {

        if (personas[i].edad > 50) {
            mayoresDe50++;
        }

        sumaEdades = sumaEdades + personas[i].edad;
    }

    double promedio = 0;
    if (n > 0) {
        promedio = sumaEdades / n;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Cantidad de personas mayores de 50 anios: " << mayoresDe50 << endl;
    cout << "Promedio de edades: " << promedio << endl;

    cout << "\n--- Listado completo de personas registradas ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombres: " << personas[i].nombres << endl;
        cout << "DNI: "     << personas[i].DNI << endl;
        cout << "Edad: "    << personas[i].edad << endl;
    }

    return 0;
}