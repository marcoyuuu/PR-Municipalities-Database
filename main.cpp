// Programa para crear sistema de administración de los pueblos de Puerto Rico

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

int main()
{
    int i;
    Pueblos a;

    while (1)
    {
        cout << "\nQue desea hacer?" << endl;
        cout << "\n1: Anadir pueblo.";
        cout << "\n2: Remover pueblo.";
        cout << "\n3: Editar pueblo.";
        cout << "\n4: Imprimir lista de pueblos.";
        cout << "\n5: Imprimir datos basicos de un pueblo.";
        cout << "\n6: Imprimir total de la poblacion de PR.";
        cout << "\n7: Salir" << endl;
        cout << "\n\nEscoga un numero: ";
        cin >> i;

        switch (i)
        {
        case 1:
        {
            a.adicionar();
            break;
        }
        case 2:
        {
            a.remover();
            break;
        }
        case 3:
        {
            a.editar();
            break;
        }
        case 4:
        {
            a.imprimirLista();
            break;
        }
        case 5:
        {
            a.imprimirPueblo();
            break;
        }
        case 6:
        {
            a.imprimirPoblacion();
            break;
        }

        case 7:
        {
            cout << "\nAdios! Gracias.";
            break;
        }
        }
        if (i == 7)
            break;
    }
    return 0;
}

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
