#include <iostream>
#include <string>
using namespace std; 

struct Persona {
    string nombre;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
};

int main () {
    int n; 
    Persona personas[100];
    
    cout << "Ingrese la cantidad de personas a registrar: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, personas[i].nombre);
        
        cout << "Dia de nacimiento: "; 
        cin >> personas[i].diaNacimiento;
        
        cout << "Mes de nacimiento (1-12): "; 
        cin >> personas[i].mesNacimiento;
        
        cout << "Anio de nacimiento: "; 
        cin >> personas[i].anioNacimiento;
        cin.ignore(); 
    }

  
    int mesBuscado;
    
    do {
        cout << "\n------------------------------------------------";
        cout << "\nIngrese un mes a buscar (1-12) o ingrese 0 para SALIR: ";
        cin >> mesBuscado;

        if (mesBuscado == 0) {
            cout << "Finalizando el programa..." << endl;
        } 
        
        else {
            cout << "\n--- Cumpleaneros del mes " << mesBuscado << " ---" << endl;
            bool hayCumpleaneros = false; 

            for (int i = 0; i < n; i++) {
                if (personas[i].mesNacimiento == mesBuscado) {
            
                    cout << "- " << personas[i].nombre << " (Fecha: " 
                         << personas[i].diaNacimiento << "/" 
                         << personas[i].mesNacimiento << "/" 
                         << personas[i].anioNacimiento << ")" << endl;
                    hayCumpleaneros = true; 
                }
            }

            if (hayCumpleaneros == false) {
                cout << "Ninguna persona registrada cumple anos en este mes." << endl;
            }
        }

    } while (mesBuscado != 0); 

    return 0;
}