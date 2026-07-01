#include <iostream>
#include <string>
using namespace std; 

struct Atleta {
    string nombres;
    string pais;
    string disciplina;
    int numeroMedallas;
};

int main () {
    int n; 
    Atleta atletas[100]; 
    
    cout << "Ingrese la cantidad de atletas a registrar: ";
    cin >> n;
    cin.ignore();

   
    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << endl;
        cout << "Nombres: ";
        getline(cin, atletas[i].nombres);
        
        cout << "Pais: "; 
        getline(cin, atletas[i].pais);
        
        cout << "Disciplina: "; 
        getline(cin, atletas[i].disciplina);
        
        cout << "Numero de medallas: "; 
        cin >> atletas[i].numeroMedallas;
        cin.ignore(); 
    }

    string paisBuscado;
    cout << "\n------------------------------------------------";
    cout << "\nIngrese el nombre del pais que desea consultar: ";
    getline(cin, paisBuscado);

  
    bool encontrado = false; 
    int posMax = -1;         
    int maxMedallas = -1;   

    cout << "\n--- Atletas registrados de " << paisBuscado << " ---" << endl;

    for (int i = 0; i < n; i++) {
        
        if (atletas[i].pais == paisBuscado) {
            encontrado = true; 
            
           
            cout << "- " << atletas[i].nombres << " (" << atletas[i].disciplina 
                 << ") - Medallas: " << atletas[i].numeroMedallas << endl;

          
            if (atletas[i].numeroMedallas > maxMedallas) {
                maxMedallas = atletas[i].numeroMedallas; 
                posMax = i; 
            }
        }
    }

    if (encontrado == true) {
        cout << "\n--- Atleta con MAYOR numero de medallas de " << paisBuscado << " ---" << endl;
        cout << "Nombre: " << atletas[posMax].nombres << endl;
        cout << "Disciplina: " << atletas[posMax].disciplina << endl;
        cout << "Medallas: " << atletas[posMax].numeroMedallas << endl;
    } else {

        cout << "No se encontraron atletas registrados para " << paisBuscado << "." << endl;
    }

    return 0;
}