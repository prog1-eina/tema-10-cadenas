/******************************************************************************\
 * Curso de Programación 1. Tema 10 (caracteres y cadenas)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2020
 * Resumen: Código de ejemplo de utilización de los operadores de concatenación
 *          de cadenas de caracteres.
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
