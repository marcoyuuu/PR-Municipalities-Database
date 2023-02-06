//Archivo "header" pueblos.h

#include <iostream>
using namespace std;

class Pueblos
{
public:
    // Funciones
    void adicionar();
    void remover();
    void editar();
    void imprimirLista();
    void imprimirPueblo();
    void imprimirPoblacion();

    // Constructor por defecto
    Pueblos();

private:
    string nombre[78], alcalde[78];
    int poblacion[78], area[78], z = 0;
};
