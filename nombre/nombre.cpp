/********************************************************************************
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4 de noviembre de 2019
 * Resumen: Primer ejemplo de trabajo con cadenas de caracteres almacenadas en
 *          variables de tipo vectores de caracteres.
\********************************************************************************/
#include <iostream>
using namespace std;

const int MAX_LONG_NOMBRE = 60;

/*
 * Programa que pide el nombre del usuario, lo lee del teclado y lo escribe en la
 * pantalla (si el nombre es compuesto, solo escribre la primera palabra de este).
 */
int main() {
    cout << "Escriba su nombre: " << flush;
    char nombre[MAX_LONG_NOMBRE];
    cin >> nombre;
    cout << "Su nombre es: " << nombre << endl;
    return 0;
}
