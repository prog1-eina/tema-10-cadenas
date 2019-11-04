/********************************************************************************\
 * Curso de Programación 1. Tema 9 (vectores)
 * Autores: Miguel Ángel Latre
 * Última revisión: 31 de octubre de 2019
 * Resumen: Código de ejemplo de utilización de las funciones «strlen», «strcpy» y
 *          «strcat» de la biblioteca <cstring>.
\********************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[80] = "";
    cout << '\"' << frase << "\" tiene " << strlen(frase) << " caracteres." << endl;

    char principio[] = "En un";
    strcpy(frase, principio);
    cout << '\"' << frase << "\" tiene " << strlen(frase) << " caracteres." << endl;

    char palabra[] = " lugar";
    strcat(frase, palabra);
    cout << '\"' << frase << "\" tiene " << strlen(frase) << " caracteres." << endl;

    strcat(frase, " de la Mancha");
    cout << '\"' << frase << "\" tiene " << strlen(frase) << " caracteres." << endl;

    return 0;
}
