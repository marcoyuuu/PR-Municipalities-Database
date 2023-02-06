//Archivo de implementacion pueblos.cpp
#include <iostream>
#include "pueblos.h"
using namespace std;

// Definiciones de funciones
void Pueblos::adicionar()
{
    cout << "\nAdicionar pueblo: \n\nNombre: ";
    cin >> nombre[z];
    cout << "\nAlcalde: ";
    cin >> alcalde[z];
    cout << "\nPoblacion (en miles): ";
    cin >> poblacion[z];
    cout << "\nArea (en millas cuadradas): ";
    cin >> area[z];
    z++;
}

void Pueblos::remover()
{
    string i;
    int j;

    cout << "\nEntre el nombre del pueblo que desee eliminar: ";
    cin >> i;
    for (j = 0; j < z; j++)
    {
        if (nombre[j] == i)
        {
            nombre[j] = "";
            alcalde[j] = "";
            poblacion[j] = 0;
            area[j] = 0;
            break;
        }
    }
}

void Pueblos::editar()
{
    string i;
    int j;

    cout << "\nEntre el nombre del pueblo que desee editar: ";
    cin >> i;
    for (j = 0; j < z; j++)
    {
        if (nombre[j] == i)
        {
            cout << "\nAlcalde: ";
            cin >> alcalde[j];
            cout << "\nPoblacion (en miles): ";
            cin >> poblacion[j];
            cout << "\nArea (en millas cuadradas): ";
            cin >> area[j];
            break;
        }
    }
}

void Pueblos::imprimirLista()
{
    int j;
    cout << "\nLista de pueblos:\n";
    for (j = 0; j < z; j++)
    {
        cout << nombre[j] << endl;
    }
}

void Pueblos::imprimirPueblo()
{
    string i;
    int j;

    cout << "\nEntre el nombre del pueblo que desee buscar: ";
    cin >> i;
    for (j = 0; j < z; j++)
    {
        if (nombre[j] == i)
        {
            cout << "\nNombre: " << nombre[j];
            cout << "\n\nAlcalde: " << alcalde[j];
            cout << "\n\nPoblacion (en miles): " << poblacion[j];
            cout << "\n\nArea (en millas cuadradas): " << area[j] << endl;
            break;
        }
    }
}

void Pueblos::imprimirPoblacion()
{
    int pob = 0, j;
    for (j = 0; j < z; j++)
    {
        pob += poblacion[j];
    }
    cout << "\nPoblacion total es: " << pob << " mil.\n";
}

// Definicion de constructor
Pueblos::Pueblos() : nombre{}, alcalde{}, poblacion{}, area{}
{
}
