#include <iostream>
#include <string>
using namespace std; 

struct empleado{
    string nombre;
    string sexo; 
    int sueldo;
};

int main () {
    int n; 
    empleado empleados[100];
    
    cout<<"Ingrese la cantidad de trabajadores: ";
    cin>>n;
    cin.ignore();

    for (int i=0; i<n; i++){
        cout<<"\nEmpleado " <<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin,empleados[i].nombre);
        cout<<"Sexo: ";
        getline(cin,empleados[i].sexo);
        cout<<"Sueldo del trabajador: "; 
        cin>>empleados[i].sueldo;
        cin.ignore();
    }
    
    int posMax = 0; 
    int posMin = 0; 

    for (int i=1; i<n; i++){ 
        if (empleados[i].sueldo > empleados[posMax].sueldo) {
            posMax = i; 
        }
        if (empleados[i].sueldo < empleados[posMin].sueldo) {
            posMin = i; 
        }
    }

    cout<<"\n--- Datos del empleado con MAYOR sueldo ---" << endl;
    cout<<"Nombre: " << empleados[posMax].nombre << endl;
    cout<<"Sexo: "   << empleados[posMax].sexo << endl;
    cout<<"Sueldo: " << empleados[posMax].sueldo << endl;

    cout<<"\n--- Datos del empleado con MENOR sueldo ---" << endl;
    cout<<"Nombre: " << empleados[posMin].nombre << endl;
    cout<<"Sexo: "   << empleados[posMin].sexo << endl;
    cout<<"Sueldo: " << empleados[posMin].sueldo << endl;

    return 0;
}