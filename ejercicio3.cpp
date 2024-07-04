/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 3) Diseñe la función que determine si un entero existe dentro de un vector de enteros.
*/
#include <iostream>
using namespace std;

// Función para determinar si un entero existe dentro de un vector
bool ExisteEnVector(int x[], int total, int valor)
{
    for (int k = 0; k < total; k++)
    {
        if (x[k] == valor)
        {
            return true;
        }
    }
    return false;
}

// Función para imprimir los elementos de un vector
void ImprimeVector(int x[], int total)
{
    for (int k = 0; k < total; k++)
        cout << x[k] << " ";
    cout << endl;
}

int main()
{
    // Definición del vector
    int vector[] = {64, 25, 12, 22, 11};
    int total = sizeof(vector) / sizeof(vector[0]);
    
    cout << "Vector original: ";
    ImprimeVector(vector, total);
    
    // Verificar si un valor existe en el vector
    int valor = 22;
    if (ExisteEnVector(vector, total, valor))
    {
        cout << "El valor " << valor << " existe en el vector." << endl;
    }
    else
    {
        cout << "El valor " << valor << " no existe en el vector." << endl;
    }

    return 0;
}
