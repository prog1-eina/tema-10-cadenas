/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2020
 * Resumen: Primer ejemplo de trabajo con cadenas de caracteres almacenadas en
 *          variables de tipo vectores de caracteres.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Run Code de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 1-nombre.cpp -o 1-nombre
 *       y ejecutarse en Windows a través de la orden
 *           .\1-nombre.exe
 *       o en Linux y macOS
 *           ./1-nombre
\******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Programa de ejemplo que utiliza algunos operadores y métodos de los objetos 
 * de la clase «string».
 */
int main() {
    string nombre, apellido;
    cout << "Escribe tu nombre de pila: ";
    cin >> nombre;
    nombre.at(0) = toupper(nombre.at(0));
    cout << "Escribe tu primer apellido: ";
    cin >> apellido;
    apellido.at(0) = toupper(apellido.at(0));
    
    cout << "Hola, " << nombre << endl;
    cout << "Tu nombre empieza por la letra " << nombre[0] << "." << endl;
    cout << "Tu nombre empieza por la letra " << nombre.at(0) << "." << endl;
    cout << "Tu nombre tiene " << nombre.length() << " letras." << endl;

    if (nombre == "Miguel") {
        cout << "Te llamas como yo." << endl;
    }
    else if (nombre < "Miguel") {
        cout << "Tu nombre va alfabéticamente antes que el mío." << endl;
    }
    else {
        cout << "Tu nombre va alfabéticamente después del mío." << endl;
    }

    string nombreCompleto = nombre + " " + apellido;

    cout << "Tu nombre completo es " << nombreCompleto << endl;
    return 0;
}
