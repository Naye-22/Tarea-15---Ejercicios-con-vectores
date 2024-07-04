/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 4) Diseñe la función que calcula la sumatoria de N elementos enteros almacenados en un vector. También 
diseñe la función que calcule el promedio de esos elementos.
*/
#include <iostream>
using namespace std;

// Función para calcular la sumatoria de los elementos de un vector
int CalcularSumatoria(int x[], int total)
{
    int sumatoria = 0;
    for (int k = 0; k < total; k++)
    {
        sumatoria += x[k];
    }
    return sumatoria;
}

// Función para calcular el promedio de los elementos de un vector
double CalcularPromedio(int x[], int total)
{
    int sumatoria = CalcularSumatoria(x, total);
    return static_cast<double>(sumatoria) / total;
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

    // Calcular la sumatoria y el promedio
    int sumatoria = CalcularSumatoria(vector, total);
    double promedio = CalcularPromedio(vector, total);
    
    cout << "Sumatoria de los elementos del vector: " << sumatoria << endl;
    cout << "Promedio de los elementos del vector: " << promedio << endl;

    return 0;
}
