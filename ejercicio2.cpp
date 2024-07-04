/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 2) Diseñe el programa que calcule el tamaño del vector de enteros utilizando el operador sizeof 
(realizado en clases).
*/
#include<iostream>

using namespace std;

// Ordena el vector usando el algoritmo secuencial 
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
    // Definición del vector
    int vector[] = {64, 25, 12, 22, 11};
    
    // Calcular el tamaño del vector
    int total = sizeof(vector) / sizeof(vector[0]);
    
    cout << "Vector original: ";
    ImprimeVector(vector, total);

    // Ordenar el vector
    OrdenSecuencial(vector, total);
    
    cout << "Vector ordenado: ";
    ImprimeVector(vector, total);

    return 0;
}
