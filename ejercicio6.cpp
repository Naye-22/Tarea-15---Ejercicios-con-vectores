/* 
Fecha: 2/7/2024
Autor: Nayeli Cruz
Orden: 6) Se tiene un vector de N nombres de personas. Diseñe la función que retorne el nombre de una persona 
aleatoriamente. 
*/
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <string>  // Para usar string
using namespace std;

// Función que retorna un nombre aleatorio de un vector de nombres
string NombreAleatorio(string nombres[], int total)
{
    srand(time(0)); // Inicializar el generador de números aleatorios
    int indiceAleatorio = rand() % total; // Obtener un índice aleatorio
    return nombres[indiceAleatorio];
}

int main()
{
    // Definición del vector de nombres
    string nombres[] = {"Alice", "Bob", "Charlie", "Diana", "Edward"};
    int total = sizeof(nombres) / sizeof(nombres[0]);
    
    // Obtener un nombre aleatorio
    string nombre = NombreAleatorio(nombres, total);
    cout << "Nombre aleatorio: " << nombre << endl;

    return 0;
}