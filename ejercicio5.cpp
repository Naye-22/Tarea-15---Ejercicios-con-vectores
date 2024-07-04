/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 5) Diseñe la función que imprime una barra vertical por cada elemento del vector. 
*/
#include <iostream>
using namespace std;

// Función para imprimir una barra vertical por cada elemento del vector
void ImprimeBarras(int x[], int total)
{
    for (int k = 0; k < total; k++)
    {
        for (int j = 0; j < x[k]; j++)
        {
            cout << "*+ "; // Carácter a imprimir por cada unidad del valor
        }
        cout << "(" << x[k] << ")" << endl; // Imprimir el valor al final
    }
}

int main()
{
    // Definición del vector
    int vector[] = {10, 12, 6, 7, 15, 7, 9, 19};
    int total = sizeof(vector) / sizeof(vector[0]);
    
    // Imprimir las barras
    ImprimeBarras(vector, total);

    return 0;
}
