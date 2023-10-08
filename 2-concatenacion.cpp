/******************************************************************************\
 * Curso de Programación 1. Tema 10 (caracteres y cadenas)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2020
 * Resumen: Código de ejemplo de utilización de los operadores de concatenación
 *          de cadenas de caracteres.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2-concatenacion.cpp -o 2-concatenacion
 *       y ejecutarse en Windows a través de la orden
 *           .\2-concatenacion.exe
 *       o en Linux y macOS
 *           ./2-concatenacion
\******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase = "En un";
    cout << '\"' << frase << "\" tiene " << frase.length() << " caracteres." 
         << endl;

    frase = frase + " lugar";
    cout << '\"' << frase << "\" tiene " << frase.length() << " caracteres." 
         << endl;

    frase += " de la Mancha";
    cout << '\"' << frase << "\" tiene " << frase.length() << " caracteres." 
         << endl;

    return 0;
}
