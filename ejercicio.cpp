/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 1) Diseñe la función que ordene un vector usando el algoritmo de ordenación secuencial (realizado 
en clases).
*/
#include <iostream>
using namespace std;

// Función para ordenar un vector usando el algoritmo de ordenación secuencial
void OrdenSecuencial(int x[], int total)
{
    for (int k = 0; k < total; k++)
    {
        for (int j = k + 1; j < total; j++)
        {
            if (x[k] > x[j])
            {
                // Intercambiar los valores
                int aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
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
    // Ejemplo de uso
    int vector[] = {64, 25, 12, 22, 11};
    int n = sizeof(vector) / sizeof(vector[0]);
    
    cout << "Vector original: ";
    ImprimeVector(vector, n);

    OrdenSecuencial(vector, n);
    
    cout << "Vector ordenado: ";
    ImprimeVector(vector, n);

    return 0;
}
