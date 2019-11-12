/********************************************************************************
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 31 de octubre de 2019
 * Resumen: Ejemplos de conversión de literales numéricos a enteros y viceversa.
 * Nota: Este código requiere de la función «numCifras» con la que se trabajó en
 *       el tema de enteros y en la práctica 3. Suponemos que el módulo «calculos»
 *       en el que se definió está disponible dentro de la carpeta del proyecto
 *       «calculadora», en la carpeta correspondiente al área de trabajo
 *       «practica3». Suponemos también que la carpeta de esta área de trabajo y
 *       la del área de trabajo «practica3» se encuentran ubucadas en el mismo
 *       directorio.
\********************************************************************************/

#include <cctype>
#include "../../practica3/calculadora/calculos.h"

using namespace std;

/*
 * Pre:  ---
 * Post: Si «c» es un carácter que representa un dígito entonces 
 *       devuelve el valor numérico comprendido entre 0 y 9
 *       representado por «c»;
 *       en otro caso devuelve un valor negativo.
 */
int valorDigito(const char c) {
    if (isdigit(c)) {
        return c - '0';
    }
    else {
        return -1;
    }
}


/*
  * Pre:  «cadena» almacena una secuencia de caracteres que representan
  *       literalmente un entero con la siguiente sintaxis:
  *         <literal_entero> ::= [<signo>] <dígito> { <dígito> }
  *         <signo> ::= “+”  | “-”
  *         <dígito> ::= “0” | “1” | “2” | “3” | “4” | “5” | “6” | “7” | “8” | “9”
  * Post: Ha devuelto el valor entero representado en «cadena».
  */
int valorEntero(const char cadena[]) {
    int i = 0;
    int signo = 1;

    // cadena[0] es un dígito, un signo más o un signo menos
    if (cadena[0] == '+') {
        i = 1;
    }
    else if (cadena[0] == '-') {
        signo = -1;
        i = 1;
    }

    // cadena[i] es un dígito
    int valor = 0;
    while (cadena[i] != '\0') {
        int valorDigito = cadena[i] - '0';
        valor = 10 * valor + valorDigito;
        i = i + 1;
    }
    // cadena[i] == '\0';

    return signo * valor;
}


/*
 * Pre:  ---
 * Post: Ha asignado a «literal» una secuencia de caracteres que representa
 *       literalmente el entero «valor» con la siguiente sintaxis:
 *          <literal_entero> ::= [<signo>] <dígito> { <dígito> }
 *          <signo> ::= “+”  | “-”
 *          <dígito> ::= “0” | “1” | “2” | “3” | “4” | “5” | “6” | “7” | “8” | “9”
 */
void literalEntero (const int valor, char literal[]) {
    // Cálculo del número de cifras
    int i = numCifras(valor);
    int n = valor;

    // Determinación de si valor es negativo o no
    if (valor < 0) {
        literal[0] = '-';
        n = -valor;
        i++;
    }

    // Inserta el carácter de final de la cadena
    literal[i] = '\0';

    if (n == 0) {
        // Tratamiento específico del caso del 0;
        literal[0] = '0';
    }
    else {
        // Cálculo de las cifras de «n» de menos a más significativas
        while (n > 0) {
            i--;
            literal[i] = '0' + n % 10;
            n = n / 10;
        }
    }
}


/********************************************************************************/
#include <iostream>
using namespace std;
/*
 * Programa que hace un par de pruebas de las funciones «valorEntero» y
 * «literalEntero».
 */
int main() {
    char literal[30];
    literalEntero(valorEntero("-30067"), literal);
    cout << literal << endl;
    literalEntero(valorEntero("0"), literal);
    cout << literal << endl;
    return 0;
}
