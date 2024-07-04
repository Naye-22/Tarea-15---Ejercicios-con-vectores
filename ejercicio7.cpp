/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 7) Diseñe la función que invierte el orden de los elementos de un vector.
*/
#include <iostream>
using namespace std;

// Función para invertir el orden de los elementos de un vector
void InvertirVector(int x[], int total)
{
    int inicio = 0;
    int fin = total - 1;
    while (inicio < fin)
    {
        // Intercambiar los elementos
        int aux = x[inicio];
        x[inicio] = x[fin];
        x[fin] = aux;
        
        // Mover los índices
        inicio++;
        fin--;
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
    int vector[] = {10, 3, 6, 78, 19, 100, 14};
    int total = sizeof(vector) / sizeof(vector[0]);
    
    cout << "Vector original: ";
    ImprimeVector(vector, total);
    
    // Invertir el vector
    InvertirVector(vector, total);
    
    cout << "Vector invertido: ";
    ImprimeVector(vector, total);

    return 0;
}
