// Algoritmos Tradicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include <vector>

using std::setw;
using namespace std;

string alfabeto = "abcdefghijklmnopqrstuvwxyz";

//Atbash consistia en sustituir la primera letra del alfabeto por la ultima, la segunda por la penultima la tercera
//por la tras antepenultima y asi sucesivamente

string cifrar(string mensaje)
{
    string mensajeCifrado;
    int tam = alfabeto.size();
    int n;
    for (int i = 0; i < mensaje.size(); i++)
    {
        n = alfabeto.find(mensaje[i]) - alfabeto.size()+1;
        n = n * -1;
        while (n > tam)
        {
            n -= tam;
        }
        mensajeCifrado += alfabeto[n];
    }
    return mensajeCifrado;
}

string decifrar(string mensaje)
{
    string mensajeDecifrado;
    int tam = alfabeto.size();
    int n;
    for (int i = 0; i < mensaje.size(); i++)
    {
        n = alfabeto.find(mensaje[i]) - alfabeto.size()+1;
        n = n * -1;
        while (n < 0)
        {
            n += tam;
        }
        mensajeDecifrado += alfabeto[n];
    }
    return mensajeDecifrado;
}

int main()
{
    cout << 63 % 52 << endl;
    /*string a = "abcdefghijklmnopqrstuvwxyz";
    string b = "zyxwvutsrqponmlkjihgfedcba";
    cout << " 1" << cifrar(a) << "2" << endl;
    cout << " 1" << decifrar(b) << "2" << endl;
    std::cout << "Hello World!\n";*/
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
